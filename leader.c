#include<stdio.h>
int main()
{
	int n,flag,i,j;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];	
	printf("Now enter the values");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		flag=1;		
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			flag=0;
		}
		if(flag==1)
			printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}
