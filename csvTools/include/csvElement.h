#ifndef CSVELEMENT_H
#define CSVELEMENT_H

#include "linkedList.h"

typedef struct _csvElement{
	list *data;
	int length;
}csvElement;

void csvElem_Init(csvElement*);

csvElement* csvElem_Create();
csvElement* csvElem_Create(list*);

void csvElem_Update(csvElement*, list*);
void csvElem_Add(csvElement, void*);
//TODO: think over Delete
csvElem_Delete(int);
cavElem_Free(csvElement*);


#endif
