#include<stdio.h>
int main(){
	
	int i,j,n;
	//printf("Enter n = ");
//	scanf("%d",&n);
//	printf("\n");
	n = 3;
	int ctn = 0;
	int k = 0,temp;
	int index = 0;
	//int arr[n][n];
	int arr[4][3] = {
					{1,1,1},
					{1,1,1},
					{1,1,1},
					{1,1,1},
				  };
	for(i=0;i<4;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]==arr[i+k][j]){
				ctn++;	
			}else if(k<=i){
				ctn = 0;
				k++;
				j=0;
			}
		}
		
		if(ctn == n){
			index = i;
		}
		k=i;
		if(index!=0){
			for(j=0;j<n;j++){
				arr[index][j]=5;
			}
			index = 0;
		}
		ctn = 0;
	}
	
	for(i = 0;i<4;i++){
		for(j = 0;j<n;j++){
			if(arr[i][j]==5){
				i++;
				j--;
			}else{
				printf(" %d ",arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
