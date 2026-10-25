#include <iostream>
using namespace std;

int main() {
  int i;
  int n = 10;
  bool isPrime = true;

  for ( i = 2; i < n-1; i++){
    if (n % i == 0){
      isPrime = false;
      break;
    }
  }

  if(isPrime){
    cout << "it is a prime number" << endl;
  } else{
    cout << "it is not a prime number" << endl;
  }

  return 0;
}