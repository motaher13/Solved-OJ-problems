#include <stdio.h>
#include <string.h>
 char str[100][100];
void mark(int marks,int p,int q){
     str[p][q]=(char)marks;
     if(str[p][q+1]==' '){
        mark(marks,p,q+1);
     }
     if(str[p][q-1]==' '){
        mark(marks,p,q-1);
     }
      if(str[p+1][q]==' '){
        mark(marks,p+1,q);
     }
   if(str[p-1][q]==' '){
        mark(marks,p-1,q);
     }
}
int main()
{

    int i=0,j,k,l,p,q,r=0,g,h;
    while(gets(str[i])){
            r=0;
    for(i=1;;i++){
        gets(str[i]);
      for(p=0;p<strlen(str[i]);p++){
        if(str[i][p]=='_'){
                r=strlen(str[i]);
                break;
        }
      }
      if(r!=0)break;
    }
    k=i;
    for(i=0;i<k;i++){
        for(j=0;j<strlen(str[i]);j++){
            if(str[i][j]=='#'||str[i][j]=='/'){
            p=(int)str[i][j];
            mark(p,i,j);
            }
        }
    }
     for(i=0;i<k;i++){
            for(j=0;j<strlen(str[i]);j++){
       printf("%c",str[i][j]);
    }
    printf("\n");
     }
   for(i=0;i<r;i++)printf("_");
   printf("\n");
   for(i=0;i<k;i++)strcpy(str[i],"\0");
   i=0;
    }
    return 0;
}
