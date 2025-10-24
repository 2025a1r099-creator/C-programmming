#include <stdio.h>
#include <math.h>
int main() {
float x1,x2,y1,y2,distance;
printf("enter the x-coordinate of ist point x1:");
scanf("%f",&x1);
printf("ente the y-coordinate of ist point y1:");
scanf("%f",&y1);
printf("enter the x-coordinate of 2nd point x2:");
scanf("%f",&x2);
printf("enter the y=ccordinate of 2nd point y2:");
scanf("%f",&y2);
distance = sqrt((x1-x2)*(x2-x1)+(y2-y1)*(y2-y1));
printf("the euclidean distance is :%.2f\n",distance);
return 0;
}
