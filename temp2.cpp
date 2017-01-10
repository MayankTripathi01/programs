#include<stdio.h>
int main()
{
	int t,n,tem,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		tem=n;
		count=0;
		while(n)
		{
			if((tem%5)==0)
			{
				count++;
				tem=tem%5;	
			}
			
			
			if(tem==0)
			{
				n=n-1;
				tem=n;
			}
		}
		printf("%d",count);
		
	}
}
