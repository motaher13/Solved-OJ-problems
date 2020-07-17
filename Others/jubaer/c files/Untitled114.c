#include <stdio.h>
#include <string.h>
int main()
{
    char word[80];
    int i,j,len,temp;
    scanf("%s",word);
    len=strlen(word);
    for(i=0,j=len-1;i<len;i++,j--){
            word[j]=temp;
            word[i]=word[j];
            temp=word[i];

    }
    word[i]='\0';
    printf("%s\n",word[i]);
    if(0==strcmp(word,word)){
      printf("%s is a plandorum\n",word);
    }
    else{
      printf("%s is not a plandorum\n",word);
   }
   return 0;
}
