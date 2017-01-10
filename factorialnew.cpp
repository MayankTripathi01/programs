#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000],*p,*s;
	int i,j,k,n,c,l,t;
	a[0]='1';
	a[1]='\0';
	p=a;
	s=b;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		*s='\0';
		t=i;
		l=0;
		while(t)
		{
			c=0;
			j=l;
			for(k=0;k<strlen(p);k++,j++)
			{	
				if(l==0)
				{
					c+=((*(p+k)-48)*(t%10));
					*(s+j)=c%10+48;
					c=c/10;
				}
				else
				{
					
					c+=((*(p+k)-48)*(t%10));
					if(*(s+j)!='\0')
					c+=(*(s+j)-48);
					*(s+j)=(c)%10+48;
					c=c/10;
				}
				
			}
			*(s+j)=c+48;
		
			if(*(s+j)=='0')
			*(s+j)='\0';
			else
			*(s+j+1)='\0';
			t=t/10;
			l++;
			
		}
		if(p==a)
		{
			s=a;
			p=b;
		}
		else
		{
			s=b;
			p=a;
		}			
	}
	for(i=strlen(p)-1;i>=0;i--)
		printf("%c",*(p+i));	
	
}
