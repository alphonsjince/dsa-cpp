#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int *ptr = &a;

  cout << ptr << "\n";
  cout << *ptr << "\n";

  *ptr = 20;
  cout << a;
  return 0;
}