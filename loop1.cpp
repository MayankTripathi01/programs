#include<stdio.h>
int main()
{
	int i=0,j=0,k=0;
	for(i=1;i<4;i++){
		for(j=1;j<4;j++){
			for(k=1;k<4;k++){
				if(k!=j&&k!=i&&j!=i)
				printf("%d %d %d\n",i,j,k);
			}
		}
	}
}
