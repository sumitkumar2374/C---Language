#include<stdio.h>

int main () {
    int age = 25;
    int *ptr = &age;

    // print --> age
    printf("%d\n",age);

    // value of --> ptr
    printf("%d\n",*ptr);

    // address value of --> age
    printf("%d\n",*(&age));

    return 0;
    
}