#include <iostream>
#include <string>
using namespace std;
 
int main(){
  int i = 0;
  string s;
  cin >> s;
  if(s[0] == '1') i++;
  if(s[1] == '1') i++;
  if(s[2] == '1') i++;
  cout << i << endl;
}

/**
 * string literal (double quotes) is delimited by quotation marks and is of type char* not char.
 * if(s[0] == "1") i++; ---error---
**/