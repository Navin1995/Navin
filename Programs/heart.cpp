#include<stdio.h>
int main(){
	printf("Enter Number = 20\n");
	printf("\n");
	int n = 12;
	for(int i = 0 ;i<n/3 ; i++){
		for(int j = n/2 ; j>0 ; j--){
			if(j-3>i){
				printf(" ");
			}else{
				printf("*");
			}
		}
		for(int j=1; j<n/3+i ; j++){
			printf("*");
		}
		for(int j = n/2 ; j>0 ; j--){
			if(j-3>i){
				printf("  ");
			}else{
				printf("*");
			}
		}
		for(int j=1; j<n/3+i ; j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		printf("  ");
		for(int j = 0; j<n-1 ; j++){
			if(j<i){
				printf(" ");
			}else{
				printf("*");
			}
		}
		for(int j = n ;j>i;j--){
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}
