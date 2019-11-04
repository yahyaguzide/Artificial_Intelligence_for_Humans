#include <stdlib.h>
#include <stdio.h>

/**************************************************
//  one-hot-encoder
//
// date: 04.11.2019
// name: Yahya Guezide
//
// The One Hot Encoder in C
// One-Hot-Encoder will change Nominal Dat in a Numeric Data,
// to accomplish this it will Count the given types in the given Column
// and will add a Column for every type
//    example:
// let say we have following list: car, lkw, bike
// One-Hot Encoder will encode this to
// car    lkw    bike
// 1    0    0
// 0    1    0
// 0    0    1
//
***************************************************/

FILE *f;


