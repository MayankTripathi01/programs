#include<stdio.h>
#include<math.h>
int n;
int main()
{
	
	int i;
	float x,x1,e,f,f1;
	printf("Enter the degree of plynomial : ");
	scanf("%d",&n);
	float a[n];
	printf("Enter accuracy");
	scanf("%f",&e);
	printf("Enter value of x : ");
	scanf("%f",&x);
	for(i=0;i<n;i++)
	{
		printf("\nEnter a%d : ",i);
		scanf("%f",&a[i]);
	}
	while(1)
	{
		f=0;f1=0;
		for(i=0;i<n;i++)
		{
			f+=a[i]*pow(x,i);
			f1+=a[i]*i*pow(x,i-1);
		}
		x1=x-f/f1;
		if(fabs(x-x1)<=e)
		{
			printf("%f is the answer",x1);
			break;
		}
		x=x1;
	}
}

