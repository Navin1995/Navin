#include<stdio.h>
int push(int);
int pop();
int arr[10],ptr=-1,size;
int main(){
	size = sizeof(arr)/sizeof(int);
	
	pop();
	push(30);
	for(int i = 0;i<ptr+1;i++)
	{
		printf("position %d data = %d\n",(i+1),arr[i]);
	}
	//printf("%d",size);
	return 0;
}
int push(int a){
	if(ptr == size-1){
		printf("Overload\n");
	}else{
		ptr++;
		arr[ptr] = a;
	}
}
int pop(){
	if(ptr==-1){
		printf("EMpty\n");
	}else{
		ptr--;
	}
}
