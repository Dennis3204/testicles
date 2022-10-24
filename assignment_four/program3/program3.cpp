/*
Dennis Ren
pledge: I pledge my honor that I have abided by the stevens honor system

sources: no sources were used for this


*/

#include <iostream>
#include <vector> 
#include <algorithm>


using namespace std;


int main() {

vector<int> nums;
int num, total, counter, min;

cout << "lets add numbers!";


while(true) {

  cout << "\nGive me a number:\n";
  cin >> num;

  if (num != -1) {

    nums.push_back(num);

  }

  else if (num == -1) {

    break;
    
  }

}

for (int k = 0; k < nums.size(); k++) {
  
  total += nums[k];

}

cout << "\nThe largest number you inputed: " << *max_element(nums.begin(), nums.end()) << "\nThe smallest number you inputed: " << *min_element(nums.begin(), nums.end()) << "\nThe sum of your numbers is: " << total;


  return 0;

}

