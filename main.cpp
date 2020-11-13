#include <iostream>
#include <cstring>
using namespace std;


int main() {
  
  cout << "\n\nStart\n\n";
  cout << "Please, enter a day of the week: " << endl;
  string str;
  cin >> str;
  if ((str == "Thursday") || (str == "thursday") || (str == "tuesday") || (str == "Tuesday")) {
    cout << "You have a class today. " << endl;
  }


  cout << "\n\nStart\n\n";
  return 0;
}