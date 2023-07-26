#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,j;
    char str[100],ch;
    printf("enter name:");
    fgets(str,100,stdin);
    puts(str);
    l=strlen(str);
    //printf("string revers for name is: %s\n", strrev(str));//print kuorhs
   for(i=0,j=l-1; i<j; i++,j--)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }//print kuorhs
    /*for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        ch=str[l-1-i];
    }*///false because print kuoouk 
    printf("string reverse for name is: %s\n", str);
}