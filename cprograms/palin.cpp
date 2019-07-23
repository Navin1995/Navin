#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n = 31213,i,rem,size=0;
	int temp = n;
	int final = 0;
	while(temp!=0){
		temp/=10;
		size++;
	}
	temp = n;
	for(i=0;i<size;i++){
		rem = temp%10;
		final = final *10 + rem;
		temp/=10;
	}
	printf("%d",final);
	return 0;
}
