#include<stdio.h>
int main(){
	int a= 23,b=65,temp;
	temp = a;
	a = b;
	b = temp;
	printf("after swap %d %d",a,b);
	return 0;
}
