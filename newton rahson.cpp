#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x,e,x1=0;
	printf("Enter the values of a,b,c,d");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	printf("Enter the value of x : ");
	scanf("%f",&x1);
	printf("Enter accuracy");
	scanf("%f",&e);
	while(1)
	{
		x=x1-((a*x1*x1*x1+b*x1*x1+c*x1+d)/(3*a*x1*x1+2*b*x1+c));
		if(fabs(x-x1)<=e)
		{
			printf("%f is answer",x);
			break;
		}
		x1=x;
	}
}
