//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

void inp(float *x1, float *y1, float *x2, float *y2)
{
	printf(“Enter the value for x1: \n”);
	scanf(“%f”, x1);
	printf(“Enter the value for y1: \n”);
	scanf(“%f”, y1);
printf(“Enter the value for x2: \n”);
	scanf(“%f”, x2);
printf(“Enter the value for y2: \n”);
	scanf(“%f”, y2);
}

float dist(float x1, float y1, float x2, float y2)
{ 
	float s;
	s=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return s;
}

Void out(float x1, float y1, float x2, float y2, float sq)
{
	printf(“The distance between(%.3f, %,3f),(%.3f,%.3f) is %.3f.”, x1, y1, x2, y2,sq);
}

int main( )
{
	float x1,x2,y1,y2,square_root;
	inp(&x1,&y1,&x2,&y2);
	square_root=dist(x1,x2,y1,y2);
	out(x1,y1,x2,y2,square_root);
	return 0;
}
