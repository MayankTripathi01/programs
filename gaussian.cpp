#include<stdio.h>
#include<math.h>

int main(){
	int n,t,m,j,k,i,a,b,s=0;
	double real,imag;
	printf("Enter the value: ");
	scanf("%d",&n);
	for(k=1;k<=n;k++){
		t=sqrt(k);
		for(i=1;i<=t;i++){
			printf("i=%d",i);
			for(m=0;m<=t;m++){
				for(j=0;j<=t;j++){
					if(m!=0||j!=0){
						real=(k*m)/(m*m+j*j);
						imag=(k*j)/(m*m+j*j);
						if(real-(int)real==0&&imag-(int)imag==0){
							if(j!=0)
								s+=2*m;
							else
								s+=m;
							printf("%d\n",s);
						}
					}
			
				}
			}
		}
	}
	printf("   %d",s);
}
