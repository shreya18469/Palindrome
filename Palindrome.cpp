/*
Shreya Suresh
9/19/22
Palindrome- Read in a series of up to 80 characters, remove spaces and punctuation, and check if the input is the same backwards and forewards
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
    if (str[i] != ' ' && ispunct(str[i]) == 0){ // remove punctuation and spaces
      str[count++] = tolower(str[i]); //convert to lowercase
    }
  }
  str[len] = '\0'; //null terminating character
  len = strlen(str);
  
  for (int i = 0; i <= len; i++){
    if (str[i] >= 'a' && str[i] <= 'z'){ //remove all chars but letters
      str2[i] = str[len-i-1]; //copy the char array backwards
    }
  }
  str2[len] = '\0'; //null terminating character
  cout << "Phrase: " << str << endl;
  cout << "Reversed phrase: " << str2 << endl;
  
  if (strcmp(str2, str) != 0){ //check if input is palindrome and print result
    cout << "NOT A PALINDROME" << endl;
  } else {
    cout << "IS A PALINDROME" << endl;
  }
  return 0;
}
