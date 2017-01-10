#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void print(char *, ...);
int main()
{
	char a='A';
	int b=10;
	double f=53.123;
	print("Mayank  %.4f %d  tripathi",f,b);
}
void print(char *s, ...)
{
	char *p,*ch,t,res[40],c2;
	void *v;
	int q,c=0,i=0,pr=0,pr1=0,d=0,k=0,z=0,count=0,pre=0,j=0;
	double f;
	va_list vl;
	p=s;
	va_start(vl,s);
	while(*(s+i)!='\0')
	{
		if(*(s+i)=='%')
		{
			i++;
			switch(*(s+i))
			{
				case 'd':
					q=va_arg(vl,int);
					k=0;
					pr1=q;
					while(q!=0)
					{
						k++;
						q=q/10;
					}
					for(z=k;z>0;z--){
					res[z-1]=(pr1%10)+'0';
					pr1=pr1/10;
					}
					pr1=0;
					for(z=0;z<k;z++)
						putchar(res[z]);
					k=0;
					break;
				case 'f':
					f=va_arg(vl,double);
					pr=f;
					while(pr!=0)
					{
						k++;
						pr=pr/10;
					}
					pr=f;
					for(z=k;z>0;z--){
					res[z-1]=(pr%10)+'0';
					pr=pr/10;
					}
					for(z=0;z<k;z++)
						putchar(res[z]);
					putchar('.');
					for(z=0;z<k+2;z++)
						res[z]=NULL;
					pr=f*1000000;
					pr=pr%1000000;
					k=0;
					pr1=pr;
					for(z=6;z>=0;z--){
					res[z-1]=(pr1%10)+'0';
					pr1=pr1/10;
					}
					for(z=0;z<6;z++)
						putchar(res[z]);
					break;
				case 's':
					ch=va_arg(vl,char *);
					puts(ch);
					break;
				case 'c':
					c2=va_arg(vl,int);
					printf("%c",c2);
					break;
				case '.':
					j=i+1;
					while((*(s+j)>47)&&(*(s+j)<58))
						{
							pre=pre*10;
							pre+=(*(s+j)-'0');
							count++;
							j++;
						}
					if(*(s+j)=='f')
					{
						f=va_arg(vl,double);
						pr=f;
						while(pr!=0) //for printing integer part of float
						{
							k++;
						pr=pr/10;
						}
						pr=f;
						for(z=k;z>0;z--){
						res[z-1]=(pr%10)+'0';
						pr=pr/10;
						}
						for(z=0;z<k;z++)
							putchar(res[z]);
						putchar('.');
						for(z=0;z<k+2;z++)
							res[z]=NULL;
						pr=f*1000000;
						pr=pr%1000000;
						k=0;
						pr1=pr;
						for(z=6;z>0;z--){
						res[z-1]=(pr1%10)+'0';
						pr1=pr1/10;
						}
						for(z=0;z<pre;z++)
							putchar(res[z]);
							i=i+count+1;	
					}
					else if(*(s+j)=='d')
					{
						q=va_arg(vl,int);
						k=0;
						pr1=q;
						while(q!=0)
						{
							k++;
							q=q/10;
						}
					/*	if(pre>k)
						{
							for(d=0;d<pre-k;d++)
							putchar('0');
						}*/
						for(z=k;z>0;z--){
						res[z-1]=(pr1%10)+'0';
						pr1=pr1/10;
						}
						pr1=0;
						for(z=0;z<k;z++)
							putchar(res[z]);
						k=0;	
					i=i+count+1;
					pre=0;
							
					/*	for(z=0;z<pre-k;z++)
							res[z-1]=NULL;
						for(z=pre;z>0;z--){
						res[z-1]=(pr1%10)+'0';
						pr1=pr1/10;
						}
						pr1=0;
						for(z=0;z<pre;z++)
							putchar(res[z]);
						k=0;*/
						
						
						
					}
					/*else if(*(s+i+1)=='s')
					{
						
					}*/
			}
		}
		else
		putchar(*(s+i));
		i++;
	}
	va_end(vl);
	
}
