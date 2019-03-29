#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    string keyword[20], excuse[20];
    int t = 0;
    while (cin >> n >> m) {
        t++;
        getline(cin, excuse[0]);
        for (int i = 0; i < n; i++) {
            getline(cin, keyword[i]);
        }

        int count[20], mx = 0;
        for (int i = 0; i < m; i++) {
            getline(cin, excuse[i]);
            string e = excuse[i];
            for (int j = 0; j < e.length(); j++)
                if (e[j] >= 'A' && e[j] <= 'Z')
                    e[j] = e[j] + ('a' - 'A');
            count[i] = 0;

            for (int j = 1; j < e.length(); j++) {
                if (e[j - 1] < 'a' || e[j - 1] > 'z') {
                    for (int k = 0; k < n; k++)
                        if (e.length() - j >= keyword[k].length()) {
                            bool match = true;
                            for (int a = 0; a < keyword[k].length() && a < e.length() - j; a++)
                                if (keyword[k][a] != e[j + a]) {
                                    match = false;
                                    break;
                                }
                            if (match && (j + keyword[k].length() == e.length() || e[j + keyword[k].length()] < 'a' || e[j + keyword[k].length()] > 'z')) {
                                j += keyword[k].length();
                                count[i]++;
                            }
                        }
                }
            }
            if (count[i] > mx)
                mx = count[i];
        }

        cout << "Excuse Set #" << t << endl;
        for (int i = 0; i < m; i++)
            if (count[i] == mx)
                cout << excuse[i] << endl;
        cout << endl;
    }
    return 0;
}
