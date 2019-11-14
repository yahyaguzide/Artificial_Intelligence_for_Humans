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
}

csvElement* csvElem_Create(){
	csvElement *celem = (csvElement*)malloc(sizeof(csvElement));
	if( !celem )
		return NULL;

	csvElem_Init(celem);
	return celem;
}

csvElement* csvElem_Create( list *l ){
	csvElement *celem = (csvElement*)malloc(sizeof(csvElement));
	list *cl = (list*)malloc(sizeof(
	if( !l || !celem )
		return NULL;

	csvElem_Init(celem);
	celem->data = l;
	return celem;
}
