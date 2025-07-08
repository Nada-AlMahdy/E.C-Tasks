#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void remove_filename(char *url)
{
    char *slash=url;
    for(int i=0;url[i]!='\0';i++)
        if(url[i]=='/')
           slash=url+i;
    *slash='\0';
}
int main()
{
    char URL[101];
    printf("Enter URL : ");
    scanf("%100s",URL);
    remove_filename(URL);
    printf("URL without filename : %s\n",URL);
    return 0;
}
