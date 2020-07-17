#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;
#include <string.h>
int main()
{
    char  str[100],name[120][100];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--){
    m=0;
    scanf("%d",&n);
    getchar();
    i=1;
    while(n--){
        gets(str);
        if(strcmp(str,"LEFT")==0){
            m--;
           strcpy(name[i],str);
            i++;
        }
        else if(strcmp(str,"RIGHT")==0){
            m++;
            strcpy(name[i],str);
            i++;
        }
        else {
            k=0;
            l=1;
            for(j=strlen(str)-1;j>=0;j--){
                    if(str[j]==' ')break;
                k=k+l*((int)str[j]-48);
                l=l*10;
            }
            if(strcmp(name[k],"RIGHT")==0){
                m++;
                strcpy(name[i],"RIGHT");
                i++;
            }
            else if(strcmp(name[k],"LEFT")==0){
                m--;
                strcpy(name[i],"LEFT");
                i++;
            }
        }
    }

    printf("%d\n",m);
    }
    return 0;
}
