#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],str2[10000];
    int i,j,k,l,ck,t;
    scanf("%d",&t);
    while(t--){
    scanf("%s%s",str,str2);
    if(strlen(str)!=strlen(str2))printf("No\n");
    else{
    ck=0;
    for(i=0;str[i];i++){
    if(str[i]!=str2[i]){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            if(str2[i]!='a'&&str2[i]!='e'&&str2[i]!='i'&&str2[i]!='o'&&str2[i]!='u'){
                ck=1;
    break;
    }
    }
    else if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
    ck=1;
    break;
    }

    }
    }
    if(ck==0)printf("Yes\n");
    else printf("No\n");
    }
    }
    return 0;
}
