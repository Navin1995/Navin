#include<stdio.h>
int main(){
	printf("Enter Number = \n");
	printf("\n");
	int i,j,n = 6;
	int arr[n][n];
	int dir = 0;
	int k=0,ctn=1;
	for(i=0 ; i < n ; i++){
		for(j=0 ; j < n ; j++){
			arr[i][j] = 0;
		}
	}
	i = 0;
	j = 0;
	int lasti = 0,lastj =0;
	for(;k<n*n;k++){
		arr[i][j] = ctn;
		if(dir == 0 && i<n-1 && j<n-1){
			i++;
			dir = 1;
			ctn++;
			continue;
		}
		if(i==n-1){
			lastj = j;
		}
		if(dir == 1){
			lasti = i;
			i--;
			j++;
			ctn++;
			if(i <= 0){
				dir = 2;
				continue;
			}
		}
		if(dir == 2){
			j = 0;
			i = lasti;
			i++;
			ctn++;
			lasti = i;
			dir = 4;
			continue;
		}
		if(dir == 4){
			if(j<n-1){
				j++;
				i--;
				ctn++;
				if(i<=0){
					dir =2;
				}
			}
			if(j==n-1 ){
				dir = 5;
				continue;
			}
		}
		if(dir == 5){
			i = lasti;
			j = lastj+1;
			ctn++;
			dir = 4;
			continue;
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
