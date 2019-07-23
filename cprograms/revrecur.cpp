#include<stdio.h>
int rev(int);
int main(){
	int n = 456,revs;
	revs =rev(n);
	printf("reverse = %d",revs);
	return 0;
}
int rev(int n){
	int temp,sum;
	if(n=0){
		return sum;
	}else{
		temp = n%10;
		sum = sum * 10 + temp;
		return rev(n/10);
	}
}
