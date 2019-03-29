#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,ck;
    char str[1000];
    char ty1[20]="`1234567890-=";
    char ty2[20]="asdfghjkl;'";
   char ty3[20]="qwertyuiop[]\;";
    char ty4[20]="zxcvbnm,./";
   while(gets(str)){
    for(j=0;j<strlen(str);j++){
        for(i=0;;i++){
                if(str[j]=='a'||str[j]=='q'||str[j]=='z'||(int)str[j]==32||str[j]=='`'){
                    printf("%c",str[j]);
                    break;
                }
          else if(str[j]==ty1[i]){
                printf("%c",ty1[i-2]);
                break;
            }
            else if(str[j]==ty2[i]){
                printf("%c",ty2[i-2]);
                break;
            }
           else if(str[j]==ty3[i]){
                printf("%c",ty3[i-2]);
                break;
            }
           else  if(str[j]==ty4[i]){
                printf("%c",ty4[i-2]);
                break;
            }
        }
    }
    printf("\n");
    }
    return 0;
}

