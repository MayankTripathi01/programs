#include<stdio.h>
#include<stdlib.h>
void swap(int *,int, int);
int main()
{
	int n,i,j,min_index;
	printf("Enter the number of values : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter values");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		min_index=i;
		for(j=i+1;j<n;j++)
			if(a[min_index]>a[j])
				min_index=j;
		if(min_index!=i)
			swap(a,i,min_index);
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void swap(int *a,int i,int min_index )
{
	int temp;
	temp=a[i];
	a[i]=a[min_index];
	a[min_index]=temp;
}

