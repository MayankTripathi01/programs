#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
void scan(char *,...);
int main()
{
	int a;
	scan("%d",&a);
	printf("%d",a);
}
void scan(char str[100],...)
{
	va_list ap;
	int i=0,*in=0,j=0;
	char *ch,temp[100];
	double *d;
	va_start(ap,str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
			i++;
		 else if(str[i]=='%')
		{
			i++;
			switch(str[i])
			{
				case 'd':
				in=va_arg(ap,int *);	
				gets(temp);
				while(temp[j]!='\0')
				{
					(*in)=(*in)*10;	
					(*in)+=(temp[j]-48);
					j++;
				}
				i++;
				break;
				case 'f':
				d=va_arg(ap,double *);
				
							
			}
			
		}
	}
}
