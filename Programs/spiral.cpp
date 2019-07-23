#include<stdio.h>
int main(){
	printf("Enter Number = \n");
	printf("\n");
	int i,j,n = 5;
	int arr[n][n];
	char arrow = 'r';
	int UD,LR = 0;
	int ctn=n*n;
	for(i=0 ; i < n ; i++){
		for(j=0 ; j < n ; j++){
			arr[i][j] = 0;
		}
	}
	i = 0;
	j = 0;
	for(int x=n*n ; x>0 ; x--){
		arr[i][j] = x;
		if(arrow == 'r'){
			if(j<n-1){
				if(arr[i][j+1]==0){
					j++;
				}else{
					arrow = 'd';
				}
			}else if(j==n-1){
				arrow = 'd';
			}
		}
		if(arrow == 'd'){
			if(i<n-1){
				if(arr[i+1][j]==0){
					i++;
				}else{
					arrow = 'l';
				}
			}else if(i==n-1){
				arrow = 'l';
			}
			
		}
		if(arrow == 'l'){
			if(j>0){
				if(arr[i][j-1]==0){
					j--;
				}else{
					arrow = 'u';
				}
			}else if(j==0){
				arrow = 'u';
			}
		}
		if(arrow == 'u'){
			if(i>0){
				if(arr[i-1][j]==0){
					i--;
				}else{
					arrow = 'r';
					j++;
				}
			}else if(i==0){
				arrow = 'r';
				j++;
			}
		}
	}
	for(i=0 ; i < n ; i++){
		for(j=0 ; j < n ; j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
