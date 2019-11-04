#include <stdlib.h>
#include <stdio.h>

/**************************************************
//  cluster.c
//
// date: 04.11.2019
// name: Yahya Guezide
// a cluster is a struct which holds
// a centroid, this centroid element resembles the Center of a Cluster
// all Data in the Cluster will be resolve around this centroid
//
***************************************************/

// TODO: Implement LinkedList, or DLinkedList

typedef struct _cluster{
	void *centroid;
	LIST list;
}cluster;

cluster* InitCluster(){
	cluster* cli = (cluster*)malloc(sizeof(cluster));
	cl->centroid = NULL;
	cl->list.head = NULL;
	cl->list.tail = NULL;
	cl->list.length = 0;
	return cl;
}


