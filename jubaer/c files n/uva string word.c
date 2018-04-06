#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000],ch,k[90],u;
    int i,j,l,p,r,t;
   gets(str);

n=0;
   l=0;
    while(1){
            char rev[10000],k[10000];
    for(i=l,j=0;i<strlen(str);i++,j++){
    rev[j]=str[i];
    l++;
    if((int)str[i]==32||str[i]=='.'||str[i]==','){
    break;
    }
    }
 ch=rev[0];
    if(rev[0]=='a'||rev[0]=='e'||rev[0]=='i'||rev[0]=='o'||rev[0]=='u'){

            u=rev[strlen(rev)-1];
        rev[strlen(rev)-1]='a';
        //strcpy(k,rev+1);
        strcat(rev,"y");
        printf("%s%c",rev,u);
    }


    else{

            u=rev[strlen(rev)-1];
        rev[strlen(rev)-1]=ch;
        strcpy(k,rev+1);
        strcat(k,"ay");
        printf("%s%c",k,u);
    }


    if(str[l]=='\0'){
        break;
    }
 // printf(" ");

    }
    printf("\n");


   return 0;
}
