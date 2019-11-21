#include <stdlib.h>
// #include <stdio.h>

/**************************************************
//  csvElement
//
// date: 11.11.2019
// name: Yahya Guezide
// one csv data line
// lets add a attribut to a csv ELment and or change attributes
//
***************************************************/

void csvElem_Init( csvElement *celem ){
	celem->data = NULL;
	celem->length= 0;
    celem->next = NULL;
}

csvElement* csvElem_Create(){
	csvElement *celem = (csvElement*)malloc(sizeof(csvElement));
	if( !celem )
		return NULL;

	csvElem_Init(celem);
	return celem;
}

void csvElem_Add( csvElement *celem, void *attr ){
    List_AddTail( celem->data, attr);
}

// TODO: write Update, change csvElment
// NOTE: List was changed and accepts only one Free function
// it cant be used for a csvElement, a csv Element should be accept
// Strings and Numbers(double, float, int)
void csvElem_Update( csvElement *celem, list *l ){
    List_Free( csvElement
