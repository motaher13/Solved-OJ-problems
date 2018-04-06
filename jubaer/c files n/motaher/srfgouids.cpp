#include <iostream>
#include <stdlib.h>
int main ()
{
    std::string data=".9000004";
    double value = strtod(data.c_str(), NULL);
    std::cout<<value<<'\n';
    return 0;
}
