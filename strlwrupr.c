#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];
    printf("enter name:");
    fgets(str,100,stdin);
    puts(str);
    //strlwr(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("exit name:%s",str);
    //strupr(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("exit name:%s",str);
}