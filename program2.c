/*C progam to find area and perimeter of a circle */

#includ<stdio.h>

#define PI 3.14f

int main()
{
float radius,area,perimeter;

printf("Enter radius of circle:2.34")
scanf("%f",&radius);

area=PI*radius*radius;
perimeter=2*PI*radius;

printf("Area of circle: %f /n perimeter of circle: %f/n", area, perimeter);
return0;
}
