#include<bits/stdc++.h>
using namespace std;
string s[100000];
vector<char>vc[20];

int main()
{
    int i,j,k,l,m,n,t;

    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        i=0;
        while(1)
        {
            getline(cin,s[i]);
            if(s[i].size()==0)
                break;
                i++;
        }
        m=i;

        for(j=0;j<15;j++)
            for(i=m-1;i>=0;i--)
                vc[j].push_back(s[i][j]);


        for(i=0;i<m-1;i++){
            for(j=0;j<15;j++)
                printf("%c",vc[j][i]);
                printf("\n");}

        while(1)
        {

        }

    }
}







