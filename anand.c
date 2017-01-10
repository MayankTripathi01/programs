#include<stdio.h>
int main()
{
	int n,i,k,price=0;
	printf("enter the no. of elements: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		if(a[0]>a[1])
			a[0]=a[1];
		for(k=1;k<(n-1-i);k++)
			a[k]=a[k+1];
		price+=a[0];
	}
	printf("Price is %d",price);
}
