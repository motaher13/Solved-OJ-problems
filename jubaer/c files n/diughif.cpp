#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <map>
using namespace std;

#define pi M_PI

int main() {
    map<string, double> angle;
    angle["E"] = 0;
    angle["NE"] = pi / 4;
    angle["N"] = pi / 2;
    angle["NW"] = 3 * pi / 4;
    angle["W"] = pi;
    angle["SW"] = 5 * pi / 4;
    angle["S"] = 3 * pi / 2;
    angle["SE"] = 7 * pi / 4;

    string l;
    int t = 0;
    while (getline(cin, l) && l != "END") {
        t++;
        int d = 0;
        string dir = "";
        double x = 10e-12, y = 10e-12;
        for (int i = 0; i < l.length(); i++) {
            if (l[i] >= '0' && l[i] <= '9')
                d = d * 10 + (l[i] - '0');
            else if (l[i] == 'N' || l[i] == 'S' || l[i] == 'E' || l[i] == 'W')
                dir = dir + l[i];
            else {
                x += d * cos(angle[dir]);
                y += d * sin(angle[dir]);
                d = 0;
                dir = "";
            }
        }
        printf("Map #%d\n", t);
        printf("The treasure is located at (%.3f,%.3f).\n", x, y);
        printf("The distance to the treasure is %.3f.\n\n", sqrt(x * x + y * y));
    }
    return 0;
}
