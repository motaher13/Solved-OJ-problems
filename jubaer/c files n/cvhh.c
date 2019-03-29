#include <stdio.h>
char depo[1000000][1000],str[2000000];
int main()
{
    int i,j,k,l,ck=1,p;
    while(gets(str)){
    ck=1,p=0,l=0;
    for(i=0;str[i];i++){
        if(str[i]=='['){
            ck=0;
        }
        if(ck==0&&str[i]!=']'&&str[i]!='['){
            depo[p][l]=str[i];
            l++;
        }

        if(str[i]==']'){
            depo[p][l]='\0';
            p++;
            l=0;
            ck=1;
        }

    }
    for(i=p-1;i>=0;i--)printf("%s",depo[i]);
    ck=1;
    for(i=0;str[i];i++){
         if(str[i]=='['){
            ck=0;
        }
        if(str[i]==']')ck=1;
        if(ck==1&&str[i]!=']'&&str[i]!='[')printf("%c",str[i]);
    }
    printf("\n");
    }
    return 0;
}
