// String Challenge
// Have the function StringChallenge(str) take the str parameter being passed and determine if a palindrome 
// can be created by swapping two adjacent characters in the string. If it is possible to create a palindrome,
// then your program should return the palindrome, if not then return the string -1. The input string will only
// contain alphabetic characters. For example: if str is "rcaecar" then you can create a palindrome by swapping
// the second and third characters, so your program should return the string racecar which is the final 
// palindromic string.
  
// Examples

// Input: "anna" 
// Output: anna
// Input: "kyaak" 
// Output: kayak

#include <iostream>
#include <string>
using namespace std;
#include <map>


bool palindrome(string str) {
  int l = 0;
  int r = str.length()-1;

  while (l < r) {
    if (str[l] != str[r]) {
      return false;
    }
    l++;
    r--;
  }
  return true;
}

string StringChallenge(string str) {
  if (palindrome(str)) {
    return str;
  }

  string iterator = "";
  for (int i = 0; i < str.length()-1; i++) {
    // cout<<"SWAPPING: "<<str[i]<<" with: "<<str[i+1]<<endl;
    for (int j = 0; j < str.length(); j++) {
      if (j == i) {
        iterator += str[j+1];
        iterator += str[j];
        j++;
        continue;
      }
      iterator += str[j];
    }
    // cout<<"Iterator: "<<iterator<<endl;
    if (palindrome(iterator)) {
      return iterator;
    }
    iterator = "";
  }
  return "-1";
}



int main(void) { 
  
  string tests[] = {"redviider", "deiifed", "icvic", "radra", "lveel", "rootr",
     "akyak", "rveiver", "raeccar", "madamm", "erefer"};
  string correct[] = {"redivider", "deified", "civic", "ardra", "level", "rotor", "kayak", 
    "reviver", "racecar", "-1", "-1"};
  string result;
  for (int i = 0; i < 11; i++) {
    result = StringChallenge(tests[i]);
    cout<<"\n\nResult: "<<result<<endl;
    if (result == correct[i]) {
      cout<<"CORRECT!"<<endl;
    } else {
      cout<<"WRONG!"<<endl;
    }
  }
 
  return 0;
    
}
