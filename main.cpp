#include <iostream>

using namespace std;


int main() {
  
  cout << "\n\nStart\n\n";
 int n;
 cout << "What is n? " << endl;
 cin >> n;

for (int r = 0; r < n; r++ ){
  for (int c = 0; c < r; c++ ){
    //if (c - r <= 0 ) {
     cout << "*";
   // }
   // else {
    //  cout << ".";
    //}
  
  }  
  cout << endl; 
}


for (int r = n; r > 0; r-- ){
  for (int c = 0; c < r; c++ ){
    //if (c - r <= 0 ) {
     cout << "*";
   // }
   // else {
   //   cout << ".";
    //}
  
  }  
  cout << endl; 

  
}
  cout << "\n\nFinish\n\n";
  return 0;
}