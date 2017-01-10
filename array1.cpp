#include<stdio.h>
int main()
{
	int n,i,j,k=1,l=1,m,p;
	printf("Enter the no of values you want to enter: ");
	scanf("%d",&n);
	int o[n];
	printf("Now enter the values : \n");
	for(i=0;i<n;i++){
		scanf("%d",&o[i]);
	}
	p=m=n-1;

	//creating array for sum pair//
	int sp[(n*(n-1)/2)][3];
	for(i=0;i<(n*(n-1)/2);i++){
		for(j=0;j<3;j++){
			//ENtering values in each block//
			if(i==p){
				m--;
				p=i+m;
				k++;
				l=k;
				if(j==0)
					sp[i][j]=o[k-1];
				else if(j==1){
					sp[i][j]=o[l];
					l++;
				}
				else if(j==2)
					sp[i][j]=sp[i][0]+sp[i][1];
			}
			else{
				if(j==0)
					sp[i][j]=o[k-1];
				else if(j==1){
					sp[i][j]=o[l];
					l++;
				}
				else if(j==2)
					sp[i][j]=sp[i][0]+sp[i][1];
			}
		}
	}
	for(i=0;i<(n*(n-1)/2);i++){
		for(j=0;j<3;j++){
			printf("%d  ",sp[i][j]);
		}
		printf("\n");
	}
//checking for the frequency of sum//
int f1=0,sum1=sp[0][2];
int f2=0,sum2
;
int max=sp[0][2];
for(i=0;i<(n*(n-1)/2);i++){
	for(j=i+1;j<(n*(n-1)/2);j++){
		if(i==0&&sp[0][2]==sp[j][2])
			f1++;
		else if(i!=0&&sp[i][2]==sp[j][2]){
			f2++;
			sum2=sp[i][2];
		}		
	}
	if(f2>f1){
		f2=f1;
		max=sp[i][2];
	}
}
for(i=0;i<(n*(n-1)/2);i++){
	if(max==sp[i][2])
		printf("\n%d-------%d\n",sp[i][0],sp[i][1]);
}
}

