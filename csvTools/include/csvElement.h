#ifndef CSVELEMENT_H
#define CSVELEMENT_H


// Note: Everything in csvElement is going to change
// it will no longer suppert void * data but rather have 
// functions that lets the user add a Numeric value or string
// this will make csvElement more safe and efficient
//
// linkedList is not needed anymore 
#include "linkedList.h"

typedef struct _csvElement{
	list *data;
	int length;
    struct _csvElement *next;
}csvElement;

void csvElem_Init(csvElement*);

csvElement* csvElem_Create();

void csvElem_Add(csvElement*, void*);
void csvElem_Update(csvElement*, list*);
//TODO: think over Delete
csvElem_Delete(int);
cavElem_Free(csvElement*);


#endif
