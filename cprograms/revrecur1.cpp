#include<stdio.h>
int rev(int);
int main(){
	int n = 456,revs;
	revs =rev(n);
	printf("reverse = %d",revs);
	return 0;
}
int sum = 0;
int rev(int n){
	int temp;
	if(n){
		temp = n%10;
		sum = sum * 10 + temp;
		rev(n/10);
	}else{
		return sum;
	}
}


