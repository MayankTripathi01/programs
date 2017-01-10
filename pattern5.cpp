#include<stdio.h>
int main()
{
	int n,i,j,k,l,p,s,m=0;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		s=i;
		p=1;
		for(j=1;j<i;j++){
			s+=n-p;
			p++;
		}
		for(k=0;k<n-i;k++)
			printf("\t");
		for(l=0;l<i;l++){
			if(l==0){
					printf("%d\t",s);
			}
			else{
				printf("%d\t",s-(m+l));
				s=s-(m+l);
			}
		}
		m++;
		printf("\n");
	}
}

