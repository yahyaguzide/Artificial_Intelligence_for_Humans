#include <stdlib.h>
#include <stdio.h>

#include "include/linkedList.h"
#include "include/fgetcher.h"

/**************************************************
//  csvTools.c
//
// date: 04.11.2019
// name: Yahya Guezide
// 
// csvTools can open save and update csv data files
//
***************************************************/

typedef struct _csv csv;

void CSV_Init( csv *cs ){
	List_Init(&cs->list);
	cs->attrNum = 0;
}

csv* CSV_Create(){
	csv *cs = (csv*)malloc(sizeof(csv));
	CSV_Init(cs);
}

_Bool CSV_AddData( csv *cs, list *data ){
	// if the given Data does not hold enough
	// Attributes return false.
	// I let the User decide what he wants to fill
	// into empty attributes,
	// He could use the mean or just use -1, nan maybe?
	if( csv->attrNum > List_GetLength(data) )
		return 0;

	if( csv->attrNum < List_GetLength(data) ){
		for( int i= attrNum - List_GetLength(data); i > 0; i-- )
			List_Delete( List_GetElem( List_GetLength(data)-1 ) );// Delete Tail dif( attrNum, List_GetLength(l) ) times
	}

	List_AddTail( &csv->l, data );
}

// NOTE: would be better if i return just a list, the User can decide what he want's to do with it
// TODO: find a clean way to open and close a stream
int CSV_ReadLine( FILE *f, char *buffer, int lenght ){
	int c, lines = 0;

	for(; FgetchLine(f, buffer, length ) == -1; lines++ ){
		while( *buffer != '\0' ){
			
		}


		CSV_AddData( cs,  );
	}
}
