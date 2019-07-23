#include<stdio.h>
int arr[10],size = 10,i,rear=-1,front=0;
int insert(int);
int del();
void display();
int main(){
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	insert(70);
	insert(40);
	insert(50);
	insert(160);
	del();
	del();
	insert(20);
	insert(120);
	display();
	return 0;
}
int insert(int a){
	if(front==0&&rear==size-1||front>0&&rear==front-1){
		printf("Overload\n");
	}else{
		if(front>0&&rear==size-1){
			//printf("a\n");
			rear=0;
			arr[rear]=a;
		}else{
			if(( front==0 && rear==-1 )||( rear!=front-1 )){
				rear++;
				arr[rear]=a;
			}
		}
	}
}
int del(){
	if(front==0&&rear==-1){
		printf("Empty\n");
	}else{
		if(front==rear){
			printf("data Deleted\n",arr[front]);
			front=0;
			rear=-1;
		}else{
			if(front==size-1){
				printf("data Deleted\n",arr[front]);
				front=0;
			}else{
				printf("data Deleted\n",arr[front]);
				front++;
			}
		}
	}
}
void display(){
	if(front==0&&rear==-1){
		printf("Underflow\n");
	}else{
		if(front>rear){
			for(i=0;i<=rear;i++){
				printf("Data = %d\n",arr[i]);
			}
			for(i=front;i<=size-1;i++){
				printf("Data = %d\n",arr[i]);
			}
		}else{
			for(i=front;i<=rear;i++){
				printf("Data = %d\n",arr[i]);
			}
		}
	}
} 
