#include <stdio.h>

int main () {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int prime = 0;
    for (int i = 2; i < n; i++) {

        if (n%i==0){
            prime = 1;
        }
         
    }

    if(prime) {
        printf("%d is not a prime number\n",n);
    } else {
        printf("%d is a prime number\n",n);
    }
    return 0;
    
}