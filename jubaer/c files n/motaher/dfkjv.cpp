#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        map<string, bool> s;
        int count = 0;
        istringstream strm(line);
        string a;
        while (strm >> a) {
            s[a] = true;
            count++;
        }
        bool element_not_found = false, common_element = false;
        getline(cin, line);
        istringstream strm2(line);
        string b;
        while (strm2 >> b) {
            if (s[b] == false)
                element_not_found = true;
            else {
                s[b] = false;
                count--;
                common_element = true;
            }
        }
        if (element_not_found && count && common_element)
            cout << "I'm confused!\n";
        else if (element_not_found && count && !common_element)
            cout << "A and B are disjoint\n";
        else if (element_not_found && count == 0)
            cout << "A is a proper subset of B\n";
        else if (!element_not_found && count == 0)
            cout << "A equals B\n";
        else if (!element_not_found && count && common_element)
            cout << "B is a proper subset of A\n";
    }
    return 0;
}
