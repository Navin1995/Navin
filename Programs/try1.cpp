#include <stdio.h>
int main(){
	int n;
	printf("Enter number of lines");
	//scanf("%d",&n);
	printf("\n");
	for(int i = 0; i<5 ; i++){
		for(int j = 5 ; j > 0 ; j--){
			if(j-1>i){
				printf("%d",j-i);
			}else{
				printf("*");
			}
		}
		printf("\t");
		for(int j = 0 ; j <= i ; j++){
			printf("*");
		}
		
		printf("\t");
		for(int j = 5 ; j > i ; j--){
			printf("*");
		}
		printf("\t");
		for(int j = 0 ; j < 5; j++){
			if(j<i){
				printf(" ");
			}else{
				printf("*");	
			}
		}
		printf("\n");
	}
	
	/*for(int i = 1;i<=5;i++){
		for(int j=5;j>i;j--){
			printf("*");
		}
		for(int j =1;j<=i;j++){
			printf("1");
		}
		printf(" ");
		for(int j =i;j<=5;j++){
			printf("2");
		}
		printf(" \n");
	}*/
	return 0;
}
