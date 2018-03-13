#include <iostream>

using namespace std;

int fib(int n) {
  if (n == 1 || n == 2) {
    // cout << n;
    return n;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

int main() {
  // variables
  string numberEntered; int n; int answer;

  cout << "Enter a number:" << endl;
  getline(cin, numberEntered);

  n = stoi(numberEntered);
  answer = fib(n);
  cout << answer << endl;
  return 0;
}
