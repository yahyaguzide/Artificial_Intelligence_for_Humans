#ifndef CSVATTRIBUTE_H
#define CSVATTRIBUTE_H

// NOTE: User is responsible to decide which Attr is which
// unfortunately i cant think of a way to test out 
typedef struct _csvAttribute{
    char type;
    void *data;
    void *next;
}csvattribute;

// NOTE: Init and Create will need a second parameter, to determine which type is given
void csvAttribute_Init(csvattribute*, char);
csvattribute* csvAttribute_Create(char);


// TODO: write a Safe string function!!!!!!
// NOTE: This Function is very dangerous, hence it looks for a ASCII-NULL
// If ASCII-NULL was not set at the end of string Free will go out of bounds
void csvAttribute_Free(csvattribute*);


#endif
