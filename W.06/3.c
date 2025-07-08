#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void input(char a[], int n)
{
  int ch ,i=0;
  while((ch=getchar()) != '\n')
       if(i<n)
         a[i++]=ch;
  a[i]='\0';
}
void capitalize (char *a)
{
    while(*a)
        {
            *a=toupper((unsigned char)*a);
            a++;
        }


}
int main()
{
    char str[101];
    printf("Enter a string (100 characters max) : ");
    input(str,101);
    capitalize(str);
    printf("String after capitalization : %s\n",str);
    return 0;
}

