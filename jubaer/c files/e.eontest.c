#include <stdio.h>
#include <string.h>
 char str[100110],str2[101100];

int main()
{
    int i,j,k,l=1,m,n,ck,p,q,r,cou,t;
    scanf("%d",&t);
    while(t--){
    scanf("%s",str);
    cou=0;
    while(1){
            ck=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]=='^'&&ck==0){
            p=i;
            ck=1;
            continue;
        }

        if(ck==1&&(int)str[i]=='_'){
            ck=2;
            q=i;
            continue;
        }
        if(str[i]=='^'&&ck==2){
            r=i;
            ck=3;
            break;
        }
    }
    if(ck!=3)break;
   else if(ck==3){
        j=0;
    for(k=0;str[k];k++){
        if(k!=p&&k!=q&&k!=r){
            str2[j]=str[k];
            j++;
        }
    }
   str2[j]='\0';
            cou++;
    }
 strcpy(str,str2);
    }
    printf("Case %d: %d",l++,cou);
    strcpy(str,"\0");
    strcpy(str2,"\0");
    printf("\n");
    }
    return 0;
}
