#include<stdio.h>
int main(){
	int n = 5,i,j;
	int flg = 0,flag = 0;
	char ctn = 'A';
	for(i = 0;i<n;i++){
		for(j=n;j>0;j--){
			if(j-1>i){
				printf(" ");
			}else{
				if(flg == 0){
					ctn = 'A';
					flg = 1;
				}
				if(ctn != '*'){
					ctn = '*';
				}else{
					ctn = 'A';
				}
				printf("%c",ctn);
			}
		}
		for(j = 0 ; j<i ; j++){
			if(ctn != '*'){
				ctn = '*';
			}else{
				ctn = 'A';
			}
			printf("%c",ctn);
		}
		printf("\n");
		flg = 0;
	}
	return 0;
}
