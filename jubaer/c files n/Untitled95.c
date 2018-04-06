#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],word[100];
    int i,j,length,started;
    gets(s);
    length=strlen(s);
    started=0;
    for(i=0,j=0;i<length;i++){
        if(s[i]>='a'&&s[i]<='z'){
          if(started==0){
            started=1;
             word[j]='A'+s[i]-'a';
              j++;
          }

          else{
            word[j]=s[i];
            j++;
          }
        }
        else if(s[i]>='A'&&s[i]<='Z'){
           if(started==0){
              started=1;
               j++;
           }
           word[j]=s[i];
        }
        else if(s[i]>='0'&&s[i]<='9'){
              if(started==0){
                 started=1;
                 j++;
              }

                 word[j]=s[i];
                 j++;



        }
        else {
            if(started==1){
               started=0;
               word[j]='\0';
                printf("%s\n",word);
                j=0;
            }
        }
    }
    return 0;
}

