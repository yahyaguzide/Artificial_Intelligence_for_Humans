#include <stdlib.h>
#include <stdio.h>

#include "include/linkedList.h"

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
			List_Delete( List_GetElem( List_GetLength(data) ) );// Delete Tail dif( attrNum, List_GetLength(l) ) times
	}

	List_AddHead( &csv->l, data );
}


