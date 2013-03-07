// Fibonacci Sequence

#include <cstdlib>
#include <iostream>
using namespace std;

void PrintArray(int length, int top[], int bottom[]) {
  for(int i = 0; i < length; i++) {
    cout << top[i] << "   ";
    if ((top[i] >= 8 && top[i] < 10) || (top[i] >= 12 && top[i] <= 16) || (top[i] >= 17))
      cout << " ";
    if (top[i] >= 17)
      cout << " ";
  }

  cout << endl;
  
  for(int i = 0; i < length; i++) {
    cout << bottom[i] << "   ";
  }

  cout << endl;
}

void fib(int fiblength, int top[], int bottom[]) {
  int fib1 = 0; 
  int fib2 = 1;
// 0 1 1 2 3 5 8 13 21 34
  for(int i = 0; i < fiblength; i++) {
    if(i == 0 || i == 1) {
      top[i] = i + 1;
      bottom[i] = i;
    }
    else {
      bottom[i] = fib1 + fib2;
      fib1 = fib2;
      fib2 = bottom[i];
      top[i] = i + 1;
    }
  } 
}

int main() {
  int n;

  cout << "fibonacci length? ";
  cin >> n;

  int top[n];
  int bottom[n];

  fib(n, top, bottom);
  PrintArray(n, top, bottom);
}
