//Engineering lecture first assignment

#include <iostream>
#include <string>

using namespace std;


int color(string x) {

  string color;
  int o;

  if (x == "green" | x == "Green") {

    system("Color 02");

  }

  else if (x == "Blue" | x == "blue") {

    system("Color 01");

  } 

  else if (x == "Aqua" | x == "aqua") {

    system("Color 03");

  }

  else if (x == "Red" | x == "red") {

    system("Color 04");

  }

  else if (x == "Purple" | x == "purple") {

    system("Color 05");

  }

  else if (x == "Yellow" | x == "yellow") {


    system("Color 06");

  }

  else if (x == "White" | x == "white") {

    system("Color 07");

  }
  
  else if (x == "Grey" | x == "grey") {

    system("Color 08");

  }

  else if (x == "Light Red" | x == "Light red" | x == "light red") {


    system("Color 0C");

  }

  else {

    o = 1;

  }

  return o;

}

int main() {

string x,choice;
int valid;


cout << "What color would you like the text to be in?\n";



valid = color(x);

if (valid == 1) {

  cout << "\nInvalid input or that color is unavailable. Please try again\n";
}

else {

cout << ("\n\nthis should be " + x + "\n\nwow it really is " + x + "\n\nthat's so cool\n\nI can't believe it\n\nwow\n\ni like ice cream\n\nthis is meesage 7\n\nvanilla ice cream is the best!\n\nYou can't tell me otherwise\n\nthe end") << endl;


}

return 0;

}








