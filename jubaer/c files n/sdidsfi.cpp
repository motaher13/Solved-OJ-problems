#include <stdio.h>
#include <map>
#include <string.h>
using namespace std;
int main()
{
    map<char,double>name;
    char str[1000],ch;
    int i,j,k,l,ck;
    double m,n;
    scanf("%d",&l);
    while(l--){
    scanf("%s",str);
    name['C']=0;
    name['N']=0;
    name['O']=0;
    name['H']=0;
    ck=0;
    m=0;
    for(i=0;i<=strlen(str);i++){
            if(ck==1&&(str[i]=='H'||str[i]=='O'||str[i]=='N'||str[i]=='C'||str[i]=='\0')){
                if(m==0)name[ch]++;
                else name[ch]=name[ch]+m;
                m=0;
                ck=0;
            }
            if(ck==1){
                m=m*10+(int)str[i]-48;
            }
        if(str[i]=='H'||str[i]=='O'||str[i]=='N'||str[i]=='C'){
            ck=1;
            ch=str[i];
        }


    }
    printf("%.3lf",(name['C']*12.01)+(name['H']*1.008)+(name['O']*16)+(name['N']*14.01));
    printf("\n");
    name.clear();
    }
    return 0;
}
