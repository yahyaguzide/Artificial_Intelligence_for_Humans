#include <stdlib.h>

#include  "include/csvAttribute.h"

/*****************************************************************
//  csvAttribute
//
// date: 21.11.2019
// name: Yahya Guezide
// Simple attribute in a csv Element
//
*****************************************************************/

void csvAttribute_Init( csvattribute *csvAtt, char type ){
    if( !csvAtt )
        return;

    csvAtt->type = type;

    switch(type){
        case i:
            csvAtt->data = (int*)malloc(sizeof(int));
            break;
        case I:
            csvAtt->data = (unsigned int*)malloc(sizeof(int));
            break;
        case d:
            csvAtt->data = (double*)malloc(sizeof(double));
            break;
        case D:
             csvAtt->data = (unsigned double*)malloc(sizeof(double));
             break;
        case f:
             csvAtt->data = (float*)malloc(sizeof(float));
             break;
        case c:
        	 csvAtt->data = (char*)malloc(sizeof(char));
        case s:
             csvAtt->data = (sstring*)malloc(sizeof(sstring));
             break;
        default:
            csvAtt->type = 'e';   
             break;
    }
}

csvattribute *csvAttribute_Create( char type ){
    csvattribute *csva = (csvattribute*)malloc(sizeof(csvattribute));
    
    csvAttribute_Init(csva);
    return csva;
}

void csvAttribute_Free( csvattribute *csva ){
    if( csva->type == 'e' ){
        // do nothing, Attribute is corrupt
        return;   
    }else if( csva->type == 's' ){
		SString_Free( csv->data );
    }else{
        if( csva->data )
            free(csva->data;
    }
}
