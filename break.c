#include <stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 3)
        {
            break; // the loop is terminate at this point 
            // continue; (the loop is skip at this iteration)
        }
        printf("%d\n", i);
    }
    printf("end..");
    return 0;
}