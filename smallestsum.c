#include<stdio.h>
int main()
{
	int n,i,j,min;
	printf("enter the no. of elements : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0]+a[1];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(min>a[i]+a[j]&&i!=j)
				min=a[i]+a[j];
		}
	}
	printf("%d  ",min);
}
