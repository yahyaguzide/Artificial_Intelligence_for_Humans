#ifndef CSVTOOLS_H
#define CSVTOOLS_H

// csv is going to hold a List of List's where each element is going to represent
// a Attribut of a Data line
typedef struct _csv{
	list l;
	// attrNum is the Max Number of Attributes or the Limit of addable data to on Data Line
	int attrNum;
}csv;

void CSV_Init(csv*);
csv* CSV_Create();

csv* CSV_AddData(csv*, list*); 
int csv_ReadLine(FILE*);


#endif
