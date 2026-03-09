#include<stdio.h>
int main (){
    int a,b;

    printf("enter a : ");
    scanf("%d",&a);

    printf("enter b : ");
    scanf("%d",&b);

    int sum = a+b;
    int substraction = a-b;
    int multiply = a*b;
    int moduler = a%b;
    int division = a/b;

    printf("sum is : %d\n",sum);
    printf("substraction is : %d\n",substraction);
    printf("multiply is : %d\n",multiply);
    printf("moduler is : %d\n",moduler);
    printf("division is : %d\n",division);

    return 0;
}