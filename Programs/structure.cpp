#include<stdio.h>
#include<stdlib.h>
void insertbeg (int);
void insertend (int);
void insertatpos(int ,int );
void swapnotdata(int,int);
void rev();
void display();
struct node{
	struct node *next;
	int data;
}*start = NULL;
int main(){
	insertbeg(25);
	insertbeg(50);
	insertbeg(60);
	insertend(100);
	insertatpos(3,30);
	//swapnotdata(50,25);
	display();
	rev();
	display();
	return 0;
}
void insertbeg (int data){
	struct node* newnode;
 	newnode =(struct node*) malloc(sizeof(struct node));
	newnode->data = data;
	if(start== NULL){
		start = newnode;
		newnode->next = NULL;
	}else{
		newnode->next = start;
		start = newnode;
	}
}
void insertend(int data){
	struct node* newnode,*temp;
	newnode =(struct node*) malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	temp = start;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newnode;
}
void insertatpos(int pos,int data){
	if(pos == 1){
		insertbeg(data);
		return;
	}
	struct node* newnode,*temp,*tempnext;
	newnode =(struct node*) malloc(sizeof(struct node));
	newnode->data = data;
	temp = start;
	for(int i=1;i<pos-1;i++){
		temp = temp->next;
	}
	tempnext = temp->next;
	temp->next = newnode;
	newnode->next = tempnext;
}
void swapnotdata(int x,int y){
	struct node *temp,*tempxprev,*tempx,*tempxnext,*tempyprev,*tempy,*tempynext;
	temp = start;
	if(temp->data == x){
		tempxprev=start;
		tempx = temp;
		tempxnext = temp->next;
	}else{
		while(temp->next != NULL ){
			if(temp->data == x){
				tempx =  temp;
				tempxnext = temp->next;
				break;
			}else{
				tempxprev = temp;	
			}
			temp = temp->next;
		}
	}
	if(temp->data == y){
		tempyprev=start;
		tempy = temp;
		tempynext = temp->next;
	}else{
		while(temp->next != NULL ){
			if(temp->data == y){
				tempy =  temp;
				tempynext = temp->next;
				break;
			}else{
				tempyprev = temp;	
			}
			temp = temp->next;
		}
	}
	tempxprev->next = tempy;
	tempy->next = tempxnext;
	tempyprev->next = tempx;
	tempx->next = tempynext;
	printf("data at xprev %d\n",tempxprev->data);
	printf("data at x %d\n",tempx->data);
	printf("data at xnext %d\n",tempxnext->data);
	
	printf("data at yprev %d\n",tempyprev->data);
	printf("data at y %d\n",tempy->data);
	printf("data at ynext %d\n",tempynext->data);
}
void rev(){
	struct node *temp,*prev = NULL,*next;
	
	temp = start;
	while(temp!= NULL){
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	start = prev;
	printf("After Rev\n");
}
void display(){
	struct node *temp;
	temp = start;
	while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

