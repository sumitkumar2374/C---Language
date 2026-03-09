#include<stdio.h>

int main () {

    char star = '*';
    char *ptr = &star;

    // address

    printf("%u\n",&star);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);


    return 0;

}