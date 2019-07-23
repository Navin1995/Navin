#include <stdio.h>
#include<string.h>
int main(){
	int i,num,v=0,ae=0,e=0,o=0,j=0,u=0,vn=0,c=0,cn=0,ctn=0,con=0;
	char a[50];
	printf("enter the string size = ");
	gets(a);
	//printf("\n\n\n%d \n",ascii(a[0]));
	//if('A' == 65){
//		printf("hello");
	//}
	//printf("",num);
	//for(i=0;i<num;i++){
	//	scanf("%c",&a[i]);
	//}
	//char a[7]={'s','a','p','l','a','b','s'};
	char temp[50];
	//for(i=0;i< sizeof(a);i++){
	//	printf("%c\n",a[i]);
	//}
	//printf()
	for(i=0;i< strlen(a);i++){
		if(a[i] == 'a' || a[i] == 'A' ){
			if(ae == 0){
				ae++;
			}
			v++;
		}else if(a[i] == 'e' || a[i] == 'E' ){
			if(e == 0){
				e++;
			}
			v++;
		}else if(a[i] == 'i' || a[i] == 'I' ){
			if(j == 0){
				j++;
			}
			v++;
		}else if(a[i] == 'o' || a[i] == 'O' ){
			if(o == 0){
				o++;
			}
			v++;
		}else if(a[i] == 'u' || a[i] == 'U' ){
			if(u == 0){
				u++;
			}
			v++;
		}else if(a[i] > 64 ||a[i] <= 90 ||a[i] > 96 ||a[i] <= 122  ){
				con++;
			
			/*temp[cn]=
			for(i=0;i<temp.length();i++){
				
				temp[cn]=a[i];

			}*/
		}
	}
	printf("Number of vowels = %d\n",v);
	printf("Number of used vowels = %d\n",(ae+e+j+o+u));
	printf("Number of consonants = %d\n",con);
	printf("Number of used consonants = %d\n",cn);
}
