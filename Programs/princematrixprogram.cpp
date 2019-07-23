#include<stdio.h>
int main(){
	
	int i,j,n;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("\n");
//	n = 3;
	int opt = 1;
	int k;
	int arr[n][n];
	/*int arr[3][3] = {
					{0,1,1},
					{0,1,0},
					{1,1,1},
				  };*/
	
	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			printf("Enter For %d , %d = ",i , j);
			scanf("%d",&arr[i][j]);
			printf("\n");
		}
	}
	printf("Before Left Shift \n");
	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
	if(opt == 1){
		for(i = 0 ; i < n ;i++  ){
			for(j=n-1;j>0;j--){
				if(arr[i][j]==arr[i][j-1]){
					arr[i][j] = 4;
					
				}
			}
		}
	}
	printf("\nAfter Left Shift \n");
	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			if(arr[i][j] == 4){
				printf(" - ");
			}else{
				printf(" %d ",arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
