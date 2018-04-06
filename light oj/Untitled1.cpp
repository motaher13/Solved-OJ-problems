#include<bits/stdc++.h>
using namespace std;
void fun(int ara[]);
int main()
{
    int ara[]={1,2,3,4,5};
    fun(ara);
    for(int i=0;i<5;i++)
        printf("%d ",ara[i]);
}
void fun(int ara[])
{
    for(int i=0;i<5;i++)
        ara[i]+=4;
}
