#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main(){
    char str[][10]={"tanimgj","nadim","araf","anas","nazia"};
    char *t;
    int i=0,j,k;
    for(i=0;i<4;i++){
    for(j=i+1;j<5;j++){
        if(strlen(str[i])>strlen(str[j])){
           t=(char*)malloc(100);
           strcpy(t,str[i]);
           strcpy(str[i],str[j]);
           strcpy(str[j],t);

           }
           else if(strcmp(str[i],str[j])>0){


                   t=(char*)malloc(100);
           strcpy(t,str[i]);
           strcpy(str[i],str[j]);
           strcpy(str[j],t);


           }
for(k=0;k<5;k++)printf("%s\t",str[k]);
       printf("\n");

    }
    printf("\n\n");
    }

}
