#include<stdio.h>
int main(){
	int i = 0,j = 0,k,n= 4,dir = 0;
	int arr[4][4] = {
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16},
					};
	for(k=0;k< 2*n +(n-2) ;k++){
		printf(" %d ",arr[i][j]);
		if(dir == 0){
			if(j<n-1){
				j++;
			}else{
				dir = 1;
			}
		}
		if(dir == 1){
			
				j--;
				i++;	
			if(i == n){
				dir = 2;
				i--;
				j++;
			}
		}
		if(dir == 2){
			j++;
		}
	}
	return 0;
}
