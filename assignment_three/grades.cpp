#include <iostream>
#include <string.h>
#include <cstdio>
#include <vector>
#include <math.h>

using namespace std;

struct Wcourses {    

  string name;
  float Wgrade;

}; 

struct Data {

  float Cweight;
  vector<float> grades;

};

float wAvg(vector<Data> Pgrade, int val) {

float final,num0;


for (int i = 0; i < Pgrade.size(); i++) {

  num0 += Pgrade.at(val).grades.at(i);
  
}

final = (num0/Pgrade.size())* Pgrade.at(val).Cweight;

return final;

}

float sort(vector<float> Gbank) {

float total,num3;

for (int y = 0; y < Gbank.size(); y++) {

  num3 += Gbank.at(y);
}

return total;
}


int main() {

int val,num1,avg,num2,x;
float weight,grade;
string course;

vector<Wcourses> results;
vector<Data> store;
vector<float> Igrades;
vector<float> Sgrades;

cout << "welcome to the grade calculator!\n" << "Please enter the number of course grades you would like to calculate:\n" << endl;

cin >> val;

for(int i = 0; i < val; i++) {
  
  cout << "Enter the name of the course and number of grade weights there are:\n" << endl;
  cin >> course >> num1;

  results.push_back(Wcourses{course,0.0});

  for (int j = 0; j < num1; j++) {

    printf("\nNow enter weight %i and number of grades for that weight:\n",j+1);

    cin >> weight >> num2;

    store.push_back(Data{weight,Igrades});

    for (int z = 0; z < num2; z++) {
      
      printf("Now enter grade %i for weight %i (no percentages): ", z + 1, j + 1);
      cin >> grade;
      store.at(j).grades.push_back(grade);
  

    }

    x = wAvg(store,j);
    Sgrades.push_back(x);
  }

  results.at(i).Wgrade = sort(Sgrades);
  Sgrades.clear();

}

for (int k = 0; k < results.size(); k++) {

  cout << "\n" << results.at(k).name + ":\nGrade: " << results.at(k).Wgrade;

}

  return 0;
}