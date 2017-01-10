#include<stdio.h>
int cop(int,int);
int main()
{
	int m,p,n,s=0,c,i,j;
	printf("Enter the range : ");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		c=0;
		p=0;
		for(j=m;j<=n;j++)
		{
			p=1;
			if(cop(i,j)==1)
				c++;
		}
		if(p==1){
			if(i%c==0)
			s+=i;
		}
	}
	printf("Sum is %d",s);
}
int cop(int a,int b)
{
	if(b==0)
		return a;
	else
		return cop(b,a%b);
}
