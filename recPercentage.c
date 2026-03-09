#include<stdio.h>

int calculatePercentage(int science , int math , int cse);

int main () {
    int sc = 98;
    int math = 95;
    int cse = 99;
    
    printf("percentage is :%d",calculatePercentage(sc,math,cse));
    return 0;
}

int calculatePercentage(int science,int math,int cse){
    return ((science + math + cse)/3);
}