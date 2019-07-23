#include <stdio.h>
int fun(int);
int main(){
	int i;
	i = fun(3);
	printf("i = %d",i);
	return 0;
}
int fun(int i){
	if(i!=0){
		//fun(i+1);
	 return i+fun(i-1);
		
	}else{
		return i;
	}
}
