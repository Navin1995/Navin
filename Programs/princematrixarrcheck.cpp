#include<stdio.h>
#include<string.h>
int main(){
	int arr[4][4] = {
					{4,1,2,6},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16}
					};
	int a[3] = {13,10,7};
	int i,j,k=0,n=4;
	int len = 3;
	char pri = 'N';
	for(i=0,j=0;i<n;i++,j++){
		if(arr[i][j] == a[k]){
			k++;
		}else{
			k=0;
		}
		if(k==len){
			pri = 'Y';
		}	
	}
	for(i=0,j=n-1;i<n;i++,j--){
		if(arr[i][j] == a[k]){
			k++;
		}else{
			k=0;
		}
		if(k==len){
			pri = 'Y';
		}	
	}
	for(i=n-1,j=n-1;i>0;i--,j--){
		if(arr[i][j] == a[k]){
			k++;
		}else{
			k=0;
		}
		if(k==len){
			pri = 'Y';
		}	
	}
	for(i=n-1,j=0;i>0;i--,j++){
		if(arr[i][j] == a[k]){
			k++;
		}else{
			k=0;
		}
		if(k==len){
			pri = 'Y';
		}	
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[j][i] == a[k]){
				k++;
			}else{
				k=0;
			}
			if(k==len){
				pri = 'Y';
			}
		}
		k=0;
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			if(arr[j][i] == a[k]){
				k++;
			}else{
				k=0;
			}
			if(k==len){
				pri = 'Y';
			}
		}
		k=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j] == a[k]){
				k++;
			}else{
				k=0;
			}
			if(k==len){
				pri = 'Y';
			}
		}
		k=0;
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			if(arr[i][j] == a[k]){
				k++;
			}else{
				k=0;
			}
			if(k==len){
				pri = 'Y';
			}
		}
		k=0;
	}
	printf("%c",pri);
	return 0;
}
