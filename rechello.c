#include<stdio.h>

void printHw(int count);

int main () {
    printHw(5);
}


void printHw(int count){
    if (count == 0){
        return ;
    }
    printf("hello world\n");
    printHw(count-1);
}