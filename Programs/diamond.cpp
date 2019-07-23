#include <stdio.h>
int main(){
	printf("Enter Number = \n");
	printf("\n");
	int n = 10;
	for(int i =0;i<n;i++){
		for(int j = n;j > 0;j--){
			if(j-1>i){
				printf(" ");
			}else{
				printf("*");	
			}
		}
		for(int j = 0 ; j<i ; j++){
			printf("*");	
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
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
