#include<stdio.h>
int main()
{
	int k,n,i,j,max2=0,max1=0;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("\n Now Enter values\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nNow enter the value of K for Kth maximum: ");
	scanf("%d",&k);
	
	
	for(i=0;i<k;i++)
	{
		
		for(j=0;j<n;j++)
		{
			if(i==0)
			{
				if(a[j]>max1)
				max1=a[j];
			}
			else{
				if(a[j]>max2&&a[j]<max1)
				{
				max2=a[j];
				}
		
			}
		}
		if(i!=0)
		max1=max2;
		
		max2=0;
	}
	printf("Maximum is %d ",max1);
}
