#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a set of strings
    set<string> st;
    st.insert({ "geeks", "for", "geeks", "org" });

    // 'it' evaluates to iterator to set of string
    // type automatically
    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";


    multimap<int, char>m;
    for(int i=0; i<5; i++)
        {
            m.insert(make_pair(i,'a'));
            m.insert(make_pair(i,'d'));
        }

    for (auto it = m.begin(); it != m.end(); it++)
        cout << (*it).second << " ";

    return 0;
}
