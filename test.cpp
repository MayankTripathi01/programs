#include<stdio.h>
float square(float);
int main()
{
	float a,b;
	printf("Enter");
	scanf("%f",&a);
	b=square(a);
	printf("%f",b);
}
float square( float 

x){
	int y;
	y=x*x;
	return(y);
}
