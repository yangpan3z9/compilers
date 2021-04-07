#ifndef TESTTREE_H
#define TESTTREE_H
#include <cstdio>        //Input and Output operations can also be performed in C+e
#include <iostream>      //For cout and cin; input and output.
#include <string>        //Introduces string types, character traits and a set of converting functions.
#include <vector>        //Vectors are sequence containers representing arrays that can change in size.
#include "node.h"
using namespace std;

void traversePreorder(NodeT *node, int depth = 0, string indent = "", bool last = true);

#endif
