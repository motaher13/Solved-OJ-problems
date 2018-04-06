#include <stdio.h>
#include <string>
#include <string.h>
#include <map>
using namespace std;
map<string,int>name;
int main()
{

    int i,j,k,l;

    char str[1000];
    while(1){
    scanf("%s%d",str,&i);
    if(strcmp(str,"nammi")==0)break;
    if(name[str]<=0){
    name[str]=0;
    name[str]=name[str]+i;
    }
    else name[str]=name[str]+i;
    }
    scanf("%s",str);
    printf("%d",name[str]);


}
