#include <iostream>

using namespace std;

int main() {

float x,ftorial = 1;

cout << "What number do you want to take the factorial of?\n" << endl;

cin >> x;

if (x > 0) {

for (int i = 1; i < x + 1; i++) {

ftorial = ftorial * i;

}
cout << ftorial;

}

else {

cout << "please input a number greater than 0";

}


 return 0;
}