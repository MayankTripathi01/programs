#include<stdio.h>
int main()
{
	int a[5],i,j,x;
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			if(a[j]<a[i]){
			x=a[i];
			a[i]=a[j];
			a[j]=x;
			}
		}
	}
		for(i=0;i<3;i++)
		printf("%d",a[i]);
}


















