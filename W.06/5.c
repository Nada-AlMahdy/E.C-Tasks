#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void get_extension(const char *file_name, char *extension)
{
    char *dot=NULL;
    int i, n=strlen(file_name);
    for(i=0;i<=n;i++)
        if(file_name[i]=='.')
           dot=file_name+i;
    if(dot && *(dot+1))
        strcpy(extension,dot+1);
    else
        extension[0]='\0';
}
int main()
{
    char filename[101], ext[15];
    printf("Enter filename : ");
    scanf("%100s",filename);
    get_extension(filename,ext);
    if(ext[0]!='\0')
        printf("File extension : %s\n",ext);
    else
        printf("No extension found!\n");

    return 0;
}
