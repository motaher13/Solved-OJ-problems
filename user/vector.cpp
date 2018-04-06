#include<cstdio>
#include<vector>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    /*int i;
    vector<int> v,t;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    t=v;
    for(i=0;i<v.size();i++)
        cout<<t[i]<<endl;*/


    string a, b, c;
    a = "this is a string"; // easy assigning
    b = a; // copy hoye gelo! :O
    c = a + b ;// c te rakhlam a ar b er concatation
    cout << c << endl; // print korlam
    printf("%s\n", c.c_str() ); // printf diyei korlam na hoy

    cout << c.size() << endl; // length print korlam
    for(int i=0; i<c.size(); i++) cout << c[i] ;

// ekta ekta kore character print korlam

    return 0;
}

