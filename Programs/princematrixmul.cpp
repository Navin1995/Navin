#include<stdio.h>
#include<math.h>
int main(){
	int a[2][2] = {
				{1,2},
				{3,4}
				};
	int b[2][2] = {
				{5,6},
				{7,8}
				};			
	int c[2][2];
	int i,j,k,n = 2,l,sum;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j] = 0;
		}
	}
	for(l=0;l<pow(n,2);l++){
		c[i][j] = sum;
		k = a[l][]
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
