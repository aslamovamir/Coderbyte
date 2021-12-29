// Array Challenge

// Have the function ArrayChallenge(arr) take the array of numbers stored in arr and return the string true if any two numbers can be 
// multiplied so that the answer is greater than double the sum of all the elements in the array. If not, return the string false. For example: 
// if arr is [2, 5, 6, -6, 16, 2, 3, 6, 5, 3] then the sum of all these elements is 42 and doubling it is 84. There are two elements in the 
// array, 16 * 6 = 96 and 96 is greater than 84, so your program should return the string true.
// Examples

// Input: {2, 2, 2, 2, 4, 1} 
// Output: false
// Input: {1, 1, 2, 10, 3, 1, 12} 
// Output: true
  
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

string ArrayChallenge(int arr[], int arrLength) {

  vector<int> arr_v;
  int sum = 0;
  for (int i = 0; i < arrLength; i++) {
    sum += arr[i];
    arr_v.push_back(arr[i]);
  }
  int double_sum = sum * 2;
  sort(arr_v.begin(), arr_v.end());
  
 
  if (arr_v[arr_v.size()-1] * arr_v[arr_v.size()-2] > double_sum) {
    return "true";
  } else {
    return "false";
  }
}

int main(void) { 
   
  // keep this function call here
  int A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  cout << ArrayChallenge(A, arrLength);
  return 0;
    
}
