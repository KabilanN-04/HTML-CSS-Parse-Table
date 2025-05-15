#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char *data;
    struct Node *child;
    struct Node *sibling;
} Node;


Node *createNode(char *data);
void addChild(Node *parent, Node *child);
void printTree(Node *node, int level);

#endif
