#include <stdio.h>
#include<string.h>
#define ll long long int
int fun(char *, ll);
int main()
{
	ll t,k,count=0,may=0,i,sum=0,j=0;
	char str[1000];
	scanf("%ld",&t);
	while(t--){
	scanf("%s",str);
	scanf("%ld",&k);
	fun(str,k);
	for(i=0;i<strlen(str);i++)
	{
		j=i;
		while(j<strlen(str))
		{
			may+=str[j]-48;
			if(may%3==0)
			count++;
			j++;
			printf("%d---%d\n",i,may);
		}
		may=0;
	}
	printf("%d",count);
		
	}
    return 0;
}
int fun(char *ptr,ll k)
{
	ll l,i;
	char temp[500];
	if(k==0)
	return 0;
	else
	{
	temp[0]='\0';
	l=strlen(ptr);
	for(i=0;i<l;i++)
	temp[i]=*(ptr+l-1-i);
	temp[l]='\0';
	strcat(ptr,temp);
	fun(ptr,k-1);
	return 0;
	}
}

