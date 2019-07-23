#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
int stack[] = {0,5,2,4,6};
int ptr = 0;
int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	return 0;
}
void push(int a){
	if(ptr == 4){
		printf("overflow!!");
	}else{
		stack[ptr] = a;
		ptr++;
	}
}
void pop(){
	if(ptr == 0){
		printf("underflow");
	}else{
		printf("\ndeleted item = %d\n",stack[ptr]);
		ptr--;
	}
}
void display(){
	if(ptr<0){
			printf("underflow");
	}else{
		for(int i = 0;i<ptr;i++){
			printf("%d",stack[i]);
		}
	}
}
