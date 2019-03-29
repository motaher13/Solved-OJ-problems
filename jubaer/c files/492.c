#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000],rev[100000];
    int i,j,l,p,r,k,m;
   while(gets(str)){

m=0;
   l=0;
    while(m<strlen(str)){
            p=0;
    for(i=p,j=0;i<strlen(str);i++,j++){

    rev[j]=str[i];



    if((int)str[i]==32){

    break;
    }

     p++;
    }

    for(j=p-1;j>=0;j--){
          if(rev[j]=='a'||rev[j]=='e'||rev[j]=='i'||rev[j]=='o'||rev[j]=='u'){

           strcat(rev,"ay");
           break;
    }
    else if(rev[j]!='a'&&rev[j]!='e'&&rev[j]!='i'&&rev[j]!='o'&&rev[j]!='u'){
        strcpy(rev,rev+1);
        strcat(rev,"ty");
        strcat(rev,"ay");
        break;
    }
   }
   printf("%s",rev);


    if(str[i]=='\0'){
        break;
    }
    else{
  printf(" ");
   continue;
    }
    m++;
    }
    printf("\n");

   }
   return 0;
}
