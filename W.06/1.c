#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void find_smallest_largest_words()
{
  char word[21], smallest[21], largest[21];
  printf("Enter a word : ");
  scanf("%20s",word);
  strcpy(smallest,word);
  strcpy(largest,word);
  while(strlen(word)!=4)
  {
    printf("Enter a word : ");
    scanf("%20s",word);
    if(strlen(word)==4)
        break;
    if(strcmp(word,smallest)<0)
        strcpy(smallest,word);
    if(strcmp(word,largest)>0)
        strcpy(largest,word);

  }
  printf("Largest word : %s\n",largest);
  printf("Smallest word : %s\n",smallest);
}
int main()
{
    find_smallest_largest_words();
    return 0;
}
