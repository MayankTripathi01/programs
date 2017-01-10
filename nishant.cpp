#include<stdio.h>
int main()
{
	int a[20],n,i,j;
	printf("Enter the no of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0,j=n-1;i<n/2;i++,j--){
		a[i]=a[i]+a[j];
		a[j]=a[i]-a[j];
		a[i]=a[i]-a[j];
	}
	printf("Element in reverse\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
