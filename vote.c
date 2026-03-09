#include<stdio.h>
int main (){
    int age;
    printf("enter age : ");
    scanf("%d",&age);

    if (age>=18){
        printf("you can vote\n");
        printf("you can drive\n");
    } else {
        printf("you can't vote\n");
        printf("you can't drive\n");
    }
    return 0;
}