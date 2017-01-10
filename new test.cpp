#include<stdio.h>
int main()
{
	int a,d,m,y,s,i=0,c,j=0;
	int month[12]={0,3,3,6,1,4,6,2,5,0,3,5};
	int year[4]={6,4,2,0};
	char *day[]={"sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	printf("Enter the date month and year : ");
	scanf("%d%d%d",&d,&m,&y);
	c=(y/100);
	c=c%4;
	a=(y%100);
	while(j<5){
		if(j==c)
			s+=year[j];
		j++;
	}
	if(((y%4==0)&&(y%100!=0))||y%400==0){
		if(m==2)
			s+=(a+(a/4))%7;
		else
			s+=((a+(a/4))%7)+1;
		}
	else
		s+=(a+a/4)%7;
	while(i<13){
		if(i==(m-1))
			s+=month[i];
		i++;
	}	
	s+=(d%7);
	s=s%7;
	for(i=0;i<7;i++){
		if(i==s&&s-1>0)
			printf("%s",day[i-1]);
		else if(i==s)
			printf("%s",day[7+(s-1)]);
	}
}
