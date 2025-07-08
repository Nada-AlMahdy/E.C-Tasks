#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url,"http://www.");
    strcat(index_url,domain);
    strcat(index_url,"/index.html");
}
int main()
{
    char domain[101], URL[150];
    printf("Enter domain : ");
    scanf("%100s",domain);
    build_index_url(domain,URL);
    printf("Domain URL : %s\n",URL);
    return 0;
}
