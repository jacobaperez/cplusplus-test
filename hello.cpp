#include <iostream>
// #include <>

using namespace std;

string helloPerson(string person) {
  return "Hello " + person;
}

int main() {

  string yourName;
  cout << "What is your name?" << endl;
  cin >> yourName;
  // cout << "Hello " + yourName << endl;
  // cout << "Hello World!" << endl;
  string outgoingMessage = helloPerson(yourName);
  cout << outgoingMessage << endl;
  return 0;
}
