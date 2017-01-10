#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],s[20],r[20],s1[21],*p,*q=s,*rp,temp[100],str1[101];
	int i,flag=0,l1,l2,j=0;
	s1[0]=' ';
	printf("Enter the string: ");
	scanf("%s",str);
	fflush(stdin);
	str[strlen(str)]=' ';
	printf("%d",strlen(str));
	printf("\nEnter the word you want to replace: ");
	scanf("%s",s);
	fflush(stdin);
	strcat(s1,s);
	s1[strlen(s1)]=' ';
	s[strlen(s)]=' ';
	printf("%st",q);
	printf("\nEnter the word you wanna replace: ");
	scanf("%s",r);
	l1=strlen(s);
	l2=strlen(r);
//	printf("%d\n",l2);
	p=strstr(str,q);
	printf("%s\n",p);
	if(p!=str){
		q=s1;
		flag=1;
		}
/*	while(p=strstr(str,q)){
		
		printf("%s\n",p);
		//if(((*(p+strlen(q))==' ')||(*(p+strlen(q))=='\n')))
	//	{
		//	printf("Tripathi\n");
				if(flag==1)
				j=1;
			rp=p;
			rp+=l1+j;
			strcpy(temp,rp);
		//	printf("t-%s",temp);
			for(i=0;i<l2;i++)
				*(p+i+1)=r[i];
			*(p+1+l2)='\0';
			strcat(str,temp);
		//	printf("%s",str);
	//	}
	//	else
	//	break;
	
 }*/
 puts(str);
}
