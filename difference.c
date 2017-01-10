#include<stdio.h>
int main()
{
	int temp,n,p=1,count=0,i,j;
	printf("Enter the no. of entries : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	while(count<n)
	{
		
		
		for(i=0;i<n-p;i++){
		a[i]=a[i+1]-a[i];
		printf("%d",a[i]);
		}
		for(i=0;i<n;i++)
		{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		}
		p++;
		count++;
		printf("\n");
	}
}
