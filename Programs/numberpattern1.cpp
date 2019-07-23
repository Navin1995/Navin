#include<stdio.h>
int main(){
	int n = 5,i,j;
	int flg = 0,ctn = 0;
	for(i = 0;i<n;i++){
		for(j=n;j>0;j--){
			if(j-1>i){
				printf(" ");
			}else{
				if(flg == 0){
					ctn = j;
					flg = 1;
				}
				printf("%d",ctn);
				ctn++;
			}
		}
		ctn--;
		for(j = 0 ; j<i ; j++){
			ctn--;
			printf("%d",ctn);
		}
		printf("\n");
		flg = 0;
	}
	return 0;
}
