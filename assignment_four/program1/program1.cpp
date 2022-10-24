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

cout << "lets add 10 numbers!" << "\nGive me ten numbers!\n";


for (int i = 0; i < 10; i++) {

  cin >> num;

  nums.push_back(num);

}

for (int k = 0; k < nums.size(); k++) {
  
  total += nums[k];

}

cout << "\nThe largest number you inputed: " << *max_element(nums.begin(), nums.end()) << "\nThe smallest number you inputed: " << *min_element(nums.begin(), nums.end()) << "\nThe sum of your numbers is: " << total;


  return 0;

}

