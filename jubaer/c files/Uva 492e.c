
#include <string.h>
int main()
{
    char str[1000],rev[1000];
    char ch;
    int i,j,l,p,r,k,m;
   while(gets(str)){


   l=0;
    while(1){
            p=0;
    for(i=l,j=0;i<strlen(str);i++,j++){

    rev[j]=str[i];



    if((int)str[i]==32){

    break;
    }
    l++;

     p++;
    }
   // printf("%s\n",rev);
   for(j=0;j<=p-1;j++){
     //ch='rev[m][0]';
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
   printf(" ");


    }
    printf("\n");

   }
   return 0;
}
