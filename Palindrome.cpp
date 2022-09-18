/*
Shreya Suresh
9/-/22
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main(){
  char str[81];
  char str2[81];
  cin.get(str, 81);
  cin.get();
  
  int len = strlen(str);
  int count = 0;
  
  for (int i = 0; i <= len+1; i++){
    if (str[i] != ' ' && str[i] != ',' && str[i] != ':' && str[i] != '.'){
      str[count++] = tolower(str[i]);
    }
  }
  cout << str << endl;
  return 0;
}
