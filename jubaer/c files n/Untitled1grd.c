#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
    char s[][10]={"jhsdcj","gcj","gchju","hggcvhg"};
    char *t;
    int i,j;
    for(i=0;i<3;i++){
    for(j=i+1;j<4;j++){
            if(strlen(s[i])>strlen(s[j])){
                         t=(char*)malloc(100);
    strcpy(t,s[i]);
    strcpy(s[i],s[j]);
    strcpy(s[j],t);


            }
     if (strcmp(s[i],s[j])>0){

          t=(char*)malloc(100);
    strcpy(t,s[j]);
    strcpy(s[i],s[j]);
    strcpy(s[j],t);



    }


}
for(i=0;i<4;i++)printf("%s\t",s[i]);
    }


}
