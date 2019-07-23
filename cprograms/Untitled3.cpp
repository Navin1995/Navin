#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    //char a[]="saplabs";
    char a[20];
    printf("enter the string : ");
    scanf("%s",a);
    char b[20]="";
    int i,j,n,f,y=0;
    int l=strlen(a);
    //printf("%d",l);
    y=0;
    for(i=0;i<l;i++)
    {
        f=0;

        for(j=i+1;j<l;j++)
        {
            if(a[j]==a[i])
            {
                f=1;
            }
        }

        if(f==0)
        {
            b[y]=a[i];
            y++;
        }
    }
    b[y]='\0';

    printf("%s = actual string ",b);

    int v=0,c=0,nu;
    l=strlen(b);
    for(i=0;i<l;i++)
    {

        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
            v++;

        else if(isdigit(b[i]))
            nu++;
        else
            c++;
    }

    printf("\n vowels = %d  non-vowels = %d ",v,c);
	return 0;
}

