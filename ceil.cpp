#include<stdio.h>
int main()
{
	int a=1,j,m,flag=1,c,t=0,f=0,e=0;

	while(m<30){
		j=a;
		c=0;
			t=0;
			f=0;e=0;
		while(j>0){
			c=j%10;
			j=j/10;
			if(c==3||c==5||c==8){
				flag=1;
				if(c==3)
				t++;
				else if(c==5)
				f++;
				else if(c==8)
				e++;
			}
			else{
				flag=0;
				break;
			}
		}
		if((flag!=0)&&(t<2&&f<2)){
			printf("%d\n",a);
			m++;
		}
		a++;
	}
}
