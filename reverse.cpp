#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the no. of entries you want to enter : \n");
	scanf("%d",&n);
	int o[n],r[n];
	printf("Enyter the numbers : \n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&o[i]);			
			if(n%2==0)			
			{
				r[(n-1)-i]=o[i];
			}
			else
			{
				if(i<=(n-1)/2||i>(n-1)/2)
					r[(n-1)-i]=o[i];
			}
		}
	for(i=0;i<n;i++)
	{
		printf("%d  ----  %d\n",o[i],r[i]);
	}
}
