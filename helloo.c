#include<stdio.h>
#define size 10

void main () {
    char name[10];
    char*i;
    printf("\n enenter your name : ");
    gets(name);
    i=name;
    printf("\n now printing your name is : ");
    while(*i!='\0'){
        printf("%c",*i);
        i++;
    }
}