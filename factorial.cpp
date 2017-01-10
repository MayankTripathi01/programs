#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000],*p,*s;
	int n,i,j,k,l,r,t,m,c,carr;
	a[0]='1';
	b[0]='\0';
	p=a;
	s=b;
	a[1]='\0';
	scanf("%d",&n);
	for(t=2;t<=n;t++)
	{
		*s='\0';
		c=0;
		i=t;
		while(i!=0)
		{
			j=c;
			printf("MYK   %d   %d\n",i%10,j);
			for(k=0;k<strlen(p);k++,j++)
			{
					r=(((*(p+k)-48)*(i%10)));
					if((*(s+j))=='\0'){
						*(s+j)=r%10+48;
						*(s+j+1)=(r/10)+48;
					}
					else
					{
						m=((*(s+j)-48)+r);
						carr=m/10;
						*(s+j)=m%10+48;
						if(c==1)
						{
							carr=carr+(*(s+j+1)-48);
							*(s+j+1)=carr%10+48;
							carr=carr/10;}
						else
							*(s+j+1)=carr+48;
					
					}
						
			}
		/*	if(i%10==0)
			*(s+j+1)='\0';
			else{
	
			if(*(s+j)=='0')
			{
			*(s+j)='\0';
			}
			else{
			*(s+j+1)='\0';
			}
		}printf("%s mayank\n",s);*/
		if(!((*(s+j)>47)&&(*(s+j)<58)))
			*(s+j)='\0';
			else
			*(s+j+1)='\0';
			c++;
			i=i/10;
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
	//	printf("%s/m\n",s);
		//printf("\t%s\n",s);
	}
	printf("\n%s",p);
		printf("\n%s",s);
	
}
