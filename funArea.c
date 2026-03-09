// library function
#include <stdio.h>
#include <math.h>

// declaration function
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

// function call
int main()
{
   float a = 5.0;
   float b = 10.0;
   float rad = 15.5;
   float side = 10.00;

   printf("area of rectangle is :%f\n", rectangleArea(a, b));
   printf("area of circle is :%f\n", circleArea(rad));
   printf("area of square is :%f\n", squareArea(side));

   return 0;
}

// function defination
float squareArea(float side)
{
   return side * side;
}

// function defination
float circleArea(float rad)
{
   return 3.14 * rad * rad;
}

// function defination
float rectangleArea(float a, float b)
{
   return a * b;
}
