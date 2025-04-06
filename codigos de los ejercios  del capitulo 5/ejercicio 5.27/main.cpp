#include <iostream>

using namespace std;

int main() {
  for (unsigned int cuenta = 1; cuenta <= 10; ++cuenta) {
    if (cuenta != 5) {
      cout << cuenta << " ";
    }
  }
  cout << "\nSe elimino continue usando if-else" << endl;
  return 0;
}
