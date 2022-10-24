#include <iostream>
#include <vector>

using namespace std;
 
struct bank {


vector<int> nums;

};

int main() {

vector<bank> test;
vector<int> Pholder;
int x,y,z;

cout << "how many things and nums per\n";
cin >> z >> x;

for (int k = 0; k < z; k++) {

  test.push_back(bank{Pholder});

  for (int i = 0; i < x; i++) {
  
  printf("for thing %i give me num %i: ", k + 1,i + 1);

  cin >> y;

  test[k].nums.push_back(y);

  }
}

for (int j = 0; j < test.size(); j++) {

  for (int l = 0; l < test[j].nums.size(); l++) {
  
  cout << test[j].nums[l];

  }
}

  return 0;

}