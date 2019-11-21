#ifndef CSVELEMENT_H
#define CSVELEMENT_H

// NOTE: Let user give csv a Prototype of a Element
// the rest will be done by csv!!
//
// The Prototype will be used in every input line
// if Error or inconssistency in the csv data is found it will let it out

// linkedList is not needed anymore 
//#include "linkedList.h"

typedef struct _csvElement{
    csvattribute *head;
    csvattribute *tail;
	int length;
}csvElement;

void csvElem_Init(csvElement*);
csvElement* csvElem_Create();

// NOTE: Char in Add is needed to determine the Type of a data
// folowing cahractars are allowed
// i Integer
// I unsigend Interger
// f Float
// d Double
// D unsigned Double
// s String
void csvElem_Add(csvElement*, void*, char);

// TODO: Find a Good way to implement Update which will be needed by the One-Hot-Encoder
//void csvElem_Update(csvElement*, list*);

//TODO: think over Delete
//csvElem_Delete(int);
cavElem_Free(csvElement*);


#endif
