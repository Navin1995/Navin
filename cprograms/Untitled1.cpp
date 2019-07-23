#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
               int v=0;
               int c=0;
               int x=0;
               int y=0;
               int z=0;
               int w=0;
               int b=0;
               int last=0;
               char a[20]="";
               printf("Enter the string");
               scanf("%s",a);
               int len= strlen(a);
               
               for(int i=0;i<len;i++)
               {if(a[i]=='a' && x!=1)
               {
                              x++;
                              
                              v++;
               }
                              else if(a[i]=='e' && y!=1)
                              {y++;
                              v++;
                              }
                              else if(a[i]=='i' && z!=1)
                              {z++;
                              v++;
               }
                              else if(a[i]=='o' && w!=1)
                              {w++;
                              v++;
                              }
                              else if(a[i]=='u' && b!=1)
                              {
                                             b++;
                                             v++;
                              }
                              
                              else
                              {
                                             c++;
                              }
                              
                              last= c-x-y-z-w-b;
                              
               }
               
               ;
               last= c-x-y-z-w-b;
               printf("number of vovels are %d \n",v);
               printf("number of consonants are %d",last);
               return 0;
               
}

