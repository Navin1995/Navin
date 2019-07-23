#include<stdio.h>
int main(){
	int i,j,n=20;
	int temp=0,ctn=0;
	for(j=1;j<=n;j++){
		ctn = 0;
		for(i=2;i<=j/2;i++){
			if(j%i==0){
				ctn++;
				break;
			}
		}
		if(ctn==0&&j!=1){
			printf("%d\n",j);
		}
	}	
	return 0;
}

