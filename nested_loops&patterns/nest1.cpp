// multiplication table using nested loops
// This code prints a multiplication table from 1 to 10 using nested loops.
#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      cout << i * j << " ";
    }
    cout << "\n";
  }
}
