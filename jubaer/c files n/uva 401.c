#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000],rev[1000];
    int i,j,k,ck,rk,qk,dk,kk,uk,pk;
    while(scanf("%s",str)!=EOF){
    for(i=strlen(str)-1,j=0;i>=0;i--,j++){
    rev[j]=str[i];
    }
    rev[j++]='\0';
    if(strcmp(str,rev)==0)rk=0;
    else rk=1;
     qk=0;
dk=0;
kk=1;
    for(i=0,j=strlen(str)-1;i<=j;i++,j--){
        if((str[i]=='A'&&str[j]=='A'))ck=0;
        else if((str[i]=='E'&&str[j]=='3')||(str[i]=='3'&&str[j]=='E'))dk=1;
        else if((str[i]=='J'&&str[j]=='L')||(str[i]=='L'&&str[j]=='J'))dk=1;
        else if((str[i]=='5'&&str[j]=='Z')||(str[i]=='Z'&&str[j]=='5'))dk=1;
        else if((str[i]=='2'&&str[j]=='S')||(str[i]=='S'&&str[j]=='2'))dk=1;
         else if((str[i]=='O'&&str[j]=='0')||(str[i]=='0'&&str[j]=='O'))dk=1;
        else if((str[i]=='I'&&str[j]=='I'))ck=0;
         else if((str[i]=='M'&&str[j]=='M'))ck=0;
         else if((str[i]=='H'&&str[j]=='H'))ck=0;
          else if((str[i]=='T'&&str[j]=='T'))ck=0;
           else if((str[i]=='U'&&str[j]=='U'))ck=0;
            else if((str[i]=='V'&&str[j]=='V'))ck=0;
             else if((str[i]=='W'&&str[j]=='W'))ck=0;
              else if((str[i]=='X'&&str[j]=='X'))ck=0;
               else if((str[i]=='Y'&&str[j]=='Y'))ck=0;
                else if((str[i]=='1'&&str[j]=='1'))ck=0;
                 else if((str[i]=='8'&&str[j]=='8'))ck=0;
else if((str[i]=='0'&&str[j]=='0'))ck=0;
                   else if((str[i]=='O'&&str[j]=='O'))ck=0;
                   else if(str[i]==str[j]){
                    qk=1;

                   }
        else if(str[i]!=str[j]){
            kk=0;
        break;
        }

    }
    if(kk!=0&&qk==1){
        if(dk==1)uk=1;
        else uk=0;
    }
    if((uk==1&&ck==0)||(ck==0&&qk==0&&kk!=0))pk=1;
    else pk=0;
      if(rk==0&&(pk==1||uk==1))printf("%s -- is a mirrored palindrome.\n\n",str);
      else if(rk==0) printf("%s -- is a regular palindrome.\n\n",str);
      else if((pk==1||uk==1)&&kk==1) printf("%s -- is a mirrored string.\n\n",str);
      else if(rk==1&&kk==0)printf("%s -- is not a palindrome.\n\n",str);
    }
    return 0;
}
