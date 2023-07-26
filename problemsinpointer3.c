#include<stdio.h>
int main()
{
    char str[]="welcome to jenny's lectures";
    char *ptr=str;
    printf("%c\n",*ptr);//w
    printf("%c\n",*(ptr++ +1));//e
    printf("%c\n",*((ptr-- +5)-1)+3);//m+3=p
    printf("%c\n",*(++ptr +10)-32);//j-32=J
    printf("%c\t%c\t%c\n",*ptr,*++ptr,*--ptr);//e e w
}