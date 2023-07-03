#include <iostream>

using namespace std;

int main() {
  char ch;
  cout<<"Enter Character: (Case sensitive)"<<endl;
  cin>>ch;
  int temp;
  temp = ((ch>=65 && ch<=90) ? 0 : ((ch>=97 && ch<=122) ? 1 : ((ch>=48 && ch<=57) ? 2 : 3)));
  ((temp == 0) ? cout<<"Uppercase Character" : ((temp == 1) ? cout<<"Lowercase Character" : ((temp == 2) ? cout<<"It is a Number" : cout<<"It is a Symbol")));
  
  return 0;
}