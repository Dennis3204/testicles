/*
Dennis Ren
pledge: I pledge my honor that I have abided by the stevens honor system

sources: no sources were used for this


*/

#include <iostream>
#include <math.h>

using namespace std;


int main() {

int A[3][3], B[3][3], total[3][3];

cout << "lets add two 3x3 matricies\n";

for(int i = 0; i < 3; i++) {

  for(int j = 0; j < 3; j++) {

    cout << "\nEnter element A " << i + 1 << " " << j + 1 << " : ";
    cin >> A[i][j];

  }

}

cout << "\nEnter elements matrix 2: " << endl;

for(int i = 0; i < 3; i++) {

  for(int j = 0; j < 3; j++){

    cout << "\nEnter element B" << " " << i + 1 << " " << j + 1 << " : ";
    cin >> B[i][j];
  }
}

for(int i = 0; i < 3; i++) {

  for(int j = 0; j < 3; j++) {

    total[i][j] = A[i][j] + B[i][j];

  }
}

    cout << "\nThe sum of the two matricies is: " << endl;

    for(int i = 0; i < 3; i++) {

      for(int j = 0; j < 3; j++) {

        cout << total[i][j] << " ";

        if(j == 2) {

          cout << "\n";
        }
      }
}

  return 0;

}

