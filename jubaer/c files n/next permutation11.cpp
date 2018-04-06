#include <iostream>     // std::cout
#include <algorithm>
using namespace std;    // std::next_permutation, std::sort

int main () {
  char myints[] = "abc";

  //sort (myints,myints+7);

  cout << "The 3! possible permutations with 3 elements:\n";
  do {
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while ( next_permutation(myints,myints+3) );

  cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

  return 0;
}
