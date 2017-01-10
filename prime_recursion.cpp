#include<stdio.h>
#include<stdlib.h>
int rec(int,int);
int main()
{
	int n;
	printf("Enter a value: ");
	scanf("%d",&n);
	rec(n,2);
}
int rec(int x, int y){
	int i;
	if(x<y)
		exit(0);
	else{
	if(x%y==0){
		if(y+1>x&&y!=x)
				printf(" %d",y);
			else
				printf(" %d x",y);
		x=x/y;
		rec(x,y);
	}
	else{
		y++;
		for(i=2;i<y/2;i++){
			if(y%i==0){
				y++;
				continue;
		}
		
	}
	rec(x,y);
	 exit(0);
}
}
}
