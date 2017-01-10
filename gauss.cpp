#include<stdio.h>
#include<math.h>
int main()
{
	long t,s;
	double a,b,i,n,real,imag;
	printf("Enter a number: ");
	scanf("%lf",&n);
	for(i=1;i<=n;i++){
		t=sqrt(i);
		for(a=1;a<=t;a++){
			for(b=0;b<=t;b++){
				real=(i*a)/(a*a+b*b);
				imag=(i*b)/(a*a+b*b);
				if(real-(int)real==0&&imag-(int)imag==0){
					if(b!=0){
						s+=(2*a);
					}
					else
						s+=a;
				}
			}
		}
		if(i!=1)
			s+=i;
	}
	printf("%li",s);
}
