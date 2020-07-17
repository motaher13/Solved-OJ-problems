#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;

class Person
{
public:
       Person() : name(), numGiven(0), numRecieved(0) { }
       std::string name;
       int numGiven;
       int numRecieved;

       inline void give(int amount) { numGiven = amount; }
       inline void receive(int amount) { numRecieved += amount; }
       inline int assets() { return numRecieved - numGiven; }
};


int main(int argc, char** argv)
{

        typedef vector<Person> Index;
        typedef map<std::string, Person*> Map;

        bool firstOutput = true;
        std::size_t n = 0;

        while (cin >> n)
        {
                // avoid printing leading whitespace
                if (!firstOutput) std::cout << std::endl;
                else firstOutput = false;

                Map peopleMap;
                Index people(n);

                // read names
                for (Index::iterator it = people.begin(); it != people.end(); ++it)
                {
                        std::cin >> it->name;
                        peopleMap[it->name] = &(*it);
                }

                std::string giverName, recieverName;
                std::size_t numRecievers = 0, numGiven = 0;

                // read in people each person gives to
                for (std::size_t i = 0; i < n; ++i)
                {

                        cin >> giverName >> numGiven >> numRecievers;
                        Person* giver = peopleMap[giverName];

                        for (std::size_t j = 0; j != numRecievers; ++j)
                        {
                                cin >> recieverName;
                                peopleMap[recieverName]->receive(numGiven / numRecievers);
                                giver->give(numGiven - (numGiven % numRecievers));
                        }
                }

                for (Index::iterator it = people.begin(); it != people.end(); ++it)
                {
                        cout << it->name << " " << it->assets() << endl;
                }

        }
}
