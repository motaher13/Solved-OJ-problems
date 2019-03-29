#include <stdio.h>
int main()
{
    char str[90],ch[90],ch1[6];
    int i=0,j,k=0,l,m=0,n;
    gets(str);
    while(m<strlen(str)){
            l=0;
    for(i=m;i<=strlen(str);i++){
     if(str[i]==32){
     break;
    }
    ch[l]=str[i];
    l++;
    m++;
    }
    //printf("%d",strlen(ch));
    ch[l]='\0';
    for(l=0,j=strlen(ch)-1;ch[l]!='\0';l++,j--){
        ch1[j]=ch[l];
    }
    ch1[strlen(ch)]='\0';
    if(strcmp(ch,ch1)==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    // if(str[m+1]=='\0'){
      //  break;
    //}
    //else{
        m=m+1;
            continue;

    //}

    //k++;
    }

}
