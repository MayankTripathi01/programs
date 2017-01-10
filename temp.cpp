#include<stdio.h>
int main()
{
	float p=0,q=1,x=0.5;
	float a,b,c,d;
	printf("Enter a b c d");
	scanf("%f%f%f%f",&a,&b,&c,&d);
//	printf("%f\n",((a*p*p*p+b*p*p+c*p+d)*(a*q*q*q+b*q*q+c*q+d)));
	while(((a*p*p*p+b*p*p+c*p+d)*(a*q*q*q+b*q*q+c*q+d))>0)
	{
		q++;
		p=q-1;
//		printf("%d   %d\n",p,q);
	}
//	printf("%f   %f\n",p,q);
	if((a*p*p*p+b*p*p+c*p+d<=0.001))
		printf("%f",p);
	else if((a*q*q*q+b*q*q+c*q+d<=0.001))
		printf("%f",q);
	else{
		
		while(a*x*x*x+b*x*x+c*x+d<=0.001)
		{
			x=(p+q)/2;	
			if(((a*p*p*p+b*p*p+c*p+d)*(a*x*x*x+b*x*x+c*x+d))<0)
			q=x;
			else if(((a*q*q*q+b*q*q+c*q+d)*(a*x*x*x+b*x*x+c*x+d))<0)
			p=x;
			
		}
		printf("%f\n",x);
	}
}
