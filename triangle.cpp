#include <iostream>

using namespace std;

int main() {

  int n; string input; string triangle;
  cout << "Enter a number:" << endl;
  getline(cin, input);
  n = stoi(input);

  for(int i = 0; i < n; i++) {
    triangle += "*";
    cout << triangle << endl;
  }
  return 0;
}
