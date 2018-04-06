#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="motaher 123 pagla 456 hassan 789 pagla 741";
    string x;

    stringstream ss(s);

    while(ss>>x)
    {
        if(isalpha(x[0]))
            cout<<"string "<<x<<endl;

        else if(isdigit(x[0]))
            cout<<"number "<<x<<endl;
    }
    cout<<x;
    return 0;
}
