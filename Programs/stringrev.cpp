#include<stdio.h>
#include <string.h>
int string_length(char*);
void revrec(char *,int,int);
//void reverse (char *);
int main(){
	char arr[] = {'H','U','M','A','N','\0'};
	for(int i = 0;i<sizeof(arr);i++){
		printf("%c",arr[i]);
	}
	printf("\n"); 
	//reverse(arr);
	revrec(arr,0,strlen(arr)-1);
	for(int i = 0;i<sizeof(arr);i++){
		printf("%c",arr[i]);
	}
	printf("\n");

	//char *ptr;
	//ptr = arr;
	//printf("%c",*ptr);
	//ptr = &arr[5-1];
	//for(int i =0 ;i<5;i++){
//		printf(" %c ",*ptr);
//		ptr--;
//	}
	return 0;
}
void revrec(char *string ,int beg,int end){
	char c;
	if(beg>=end){
		return;
	}
	
	c = *(string+beg);
	*(string+beg) = *(string+end);
	*(string+end) = c;
	//printf("\n%c\n",c);
	revrec(string ,++beg,--end);
}
void reverse(char *string){
	int length, c;
   char *begin, *end, temp;
 
   //length = string_length(string);
   length = strlen(string);
   begin  = string;
   //end    = string;
	end = &string[strlen(string)-1];
   //for (c = 0; c < length - 1; c++)
   //   end++;
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
 
int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer + c) != '\0' )
      c++;
   return c;
}
