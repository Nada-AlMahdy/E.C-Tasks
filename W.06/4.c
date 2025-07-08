#include <stdio.h>
#include <stdlib.h>
void input(char a[], int n)
{
  int ch ,i=0;
  while((ch=getchar()) != '\n')
       if(i<n)
         a[i++]=ch;
  a[i]='\0';
}
void censor(char a[])
{
    int i;
    for(i=0;a[i+2]!='\0';i++)
        if(a[i]=='f' && a[i+1]=='o' && a[i+2]=='o')
            a[i]=a[i+1]=a[i+2]='x';
}
int main()
{
    char str[101];
    printf("Enter a string (100 characters max) : ");
    input(str,101);
    censor(str);
    printf("String after modification : %s\n",str);
    return 0;
}

