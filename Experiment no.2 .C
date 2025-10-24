#include <stdio.h>
int main() {
float r,a,b,perimeter;
//circle
printf("enter radius of circle:");
scanf("%f",&r);
area = 3.14*r*r;
perimeter = 2*r*3.14;
perimeter("Area of circle = %.2f\n",area);
printf("Perimeter of circle = %.2f\n",perimeter);


///Rectangle
printf("enter the length of the rectangle:");
scanf("%f",&a);
printf("enter the breadth of the rectangle:");
scanf("%f",&b);
area = a*b;
perimeter = 2*(a+b);
printf("Area of rectangle = %.2f\n",area);
printf("Perimeter of rectangle = %.2f\n",perimeter);

//square 
printf("Enter the side of square:");
scanf("%f",&a);
area = a*b;
perimeter = 4*a;
printf("Area of square = %.2f\n",area);
printf("Perimeter of square = %.2f\n",perimeter);
return 0;
}

