#include<stdio.h>

int main () {
    
    char star = '*';
    char *ptr = &star;
    char _star = *ptr;

    printf("%c",_star);

    return 0;
}
