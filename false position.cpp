#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,p,q,x,x1=0;
	printf("Enter value of a,b,c,d for ax^3+bx^2+cx+d=0 : ");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	printf("Enter interval : ");
	scanf("%f%f",&p,&q);
	printf("Enter accuracy :");
	scanf("%f",&e);
	if((a*q*q*q+b*q*q+c*q+d)*(a*p*p*p+b*p*p+c*p+d)>0)
	{
		printf("Root dont lie in given interval");
		exit();
	}
	while(1)
	{
		x=(p*(a*q*q*q+b*q*q+c*q+d)-q*(a*p*p*p+b*p*p+c*p+d))/((a*q*q*q+b*q*q+c*q+d)-(a*p*p*p+b*p*p+c*p+d));
		if(fabs(x-x1)<=e)
		{
			printf("%f is answer",x);
			break;
		}
		if((a*q*q*q+b*q*q+c*q+d)*(a*x*x*x+b*x*x+c*x+d)<0)
		p=x;
		else if((a*q*q*q+b*q*q+c*q+d)*(a*x*x*x+b*x*x+c*x+d)>0)
		q=x;
		else if((a*q*q*q+b*q*q+c*q+d)*(a*x*x*x+b*x*x+c*x+d)==0)
		{
			printf("%f is answer",x);
			break;
		}
		x1=x;
	}
}
