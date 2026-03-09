#include <stdio.h>

void shweta();
void priyanka();

int main()
{
    printf("enter s for shweta && enter p for priyanka : ");
    char ch;
    scanf("%c", &ch);

    if (ch == 's')
    {
        shweta();
    }
    else
    {
        priyanka();
    }
    return 0;
}

void shweta()
{
    printf("shweta\n");
}
void priyanka()
{
    printf("priyanka\n");
}