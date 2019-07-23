#include<stdio.h>
int main(){
	int n = 5,i,j,x=0,y=0,dir =0;
	int a[n][n];
	for(i = 0; i<n ; i++){
		for(j = 0; j<n ; j++){
			a[i][j] = 0;	
		}	
	}
	for(i = 1 ; i<= n*n ; i++){
		a[x][y] = i;
		if(dir == 0){
			if(y<n-1){
				if(a[x][y+1] == 0){
					y++;
				}else{
					dir = 1;
				}
			}else if(y==n-1){
				dir = 1;
			}	
		}
		if(dir == 1){
			if(x<n-1){
				if(a[x+1][y] == 0){
					x++;
				}else{
					dir = 2;
				}
			}else if(x==n-1){
				dir = 2;
			}	
		}
		if(dir == 2){
			if(y>0){
				if(a[x][y-1] == 0){
					y--;
				}else{
					dir = 3;
				}
			}else if(y==0){
				dir = 3;
			}	
		}
		if(dir == 3){
			if(x>0){
				if(a[x-1][y] == 0){
					x--;
				}else{
					dir = 0;
					y++;
				}
			}else if(x==0){
				dir = 0;
			}	
		}
	}
	for(i = 0; i<n ; i++){
		for(j = 0; j<n ; j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
