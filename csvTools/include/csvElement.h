#ifndef CSVELEMENT_H
#define CSVELEMENT_H

#include "linkedList.h"

typedef struct _csvElement{
	list data;
	int length;
}csvElement;

csvElem_Init(csvElement*);

//NOTE: list will be copyed
csvElem_Create(list, length);

csvElem_Update(list);
csvElem_Add(void*);
//TODO: think over Delete
csvElem_Delete(int);


#endif
