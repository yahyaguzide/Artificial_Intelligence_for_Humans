#ifndef csvAtribute_H
#define csvAtribute_H

#include "safeString.h"

// typedef _sstring sstring


// NOTE: User is responsible to decide which Attr is which
// unfortunately i cant think of a way to test out 
typedef struct _csvAtribute{
    char type;
    void *data;
}csvAtribute;

// NOTE: Init and Create will need a second parameter,
// to determine which type is given
void csvAtribute_Init(csvAtribute*, char);
csvAtribute* csvAtribute_Create(char);


void csvAttribute_Set(csvAttribute*, void*);
void* csvAttribute_Update(csvAttribute*, void*);

void csvAtribute_Free(csvAtribute*);


#endif
