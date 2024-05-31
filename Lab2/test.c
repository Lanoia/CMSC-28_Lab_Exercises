#include <stdio.h>
#include <stdlib.h>

struct list{
    char data;
    struct list *nextptr;
};

int main(){

    int* newPtr;

    newPtr= malloc(sizeof(struct list));
    return 0;
}