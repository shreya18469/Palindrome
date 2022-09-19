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
    if (str[i] != ' ' && ispunct(str[i]) == 0){
      str[count++] = tolower(str[i]);
    }
  }
  str[len] = '\0';
  len = strlen(str);
  
  for (int i = 0; i <= len; i++){
    if (str[i] >= 'a' && str[i] <= 'z'){
      str2[i] = str[len-i-1];
    }
  }
  str2[len] = '\0';
  cout << "Phrase: " << str << endl;
  cout << "Reversed phrase: " << str2 << endl;
  
  if (strcmp(str2, str) != 0){
    cout << "NOT A PALINDROME" << endl;
  } else {
    cout << "IS A PALINDROME" << endl;
  }
  return 0;
}
