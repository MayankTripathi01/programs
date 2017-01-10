#include<stdio.h>
int main()
{
	int n,i,j,k,max=0,s=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Now enter values: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]&a[j])==a[i]||(a[i]&a[j])==a[j])
			{	
				max=a[i];
				for(k=i;k<=j;k++)
				{
					if(a[k]>max)
						max=a[k];
				}
			}
			else
				max=0;
			s+=max;
		}
	}
	printf("%d",s);
}
