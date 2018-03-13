#include <iostream>

using namespace std;

int factorial(int n) {
  if (n==1) {
    return 1;
  } else {
    return n*factorial(n-1);
  }
}

int main() {

  string input; int n; int answer;

  cout << "Enter a number:" << endl;
  getline(cin, input);
  n = stoi(input);
  answer = factorial(n);

  cout << answer << endl;
  return 0;

}
