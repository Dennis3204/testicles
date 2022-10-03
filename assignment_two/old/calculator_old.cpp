/*
Dennis Ren
ENGR 116 assignemnt #2

Pledge: I pledge my honor that i have abided by the steven's honor code

Sources:

https://cplusplus.com/reference/cmath/

*/

//include all libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <math.h>

using namespace std; 

void type(int &x) {
  string opr;

  while (true) {
    cout << "What would you like to calculate? Please input the type of operation first:\n\n"; //print

    cin >> opr; //user input

    if (opr == "Addition" || opr == "addition" ||  opr == "Add" ||  opr == "add") {
      //if the user wants to add change x to 1
      x = 1;

      break;

    }
    else if (opr == "Subtraction" || opr == "Subtract" || opr == "subtract") {
      //if user wants to subtract change x to 2
      x = 2;
      break;

    }
    else if (opr == "Divison" || opr == "divison" || opr == "Divide" || opr == "divide") {
      //if user wants to divide change x to 3 
      x = 3;
      break;

    } 
    else if (opr == "Multiplication" || opr == "multiplication" || opr == "Multiply" || opr == "multiply") {
      //if user wants to multiply change x to 4
      x = 4;
      break;

    }

     else if (opr == "Cosine" || opr == "cosine" || opr == "cos" || opr == "Cos") {
      //if user wants to multiply change x to 4
      x = 5;
      break;

    }

     else if (opr == "Sine" || opr == "sine" || opr == "sin" || opr == "Sin") {
      //if user wants to multiply change x to 4
      x = 6;
      break;

    }

    else if (opr == "exponent" || opr == "exp") {
      //if user wants to multiply change x to 4
      x = 7;
      break;

    }

    else if (opr == "concatenate" || opr == "concatenation") {
      //if user wants to multiply change x to 4
      x = 8;
      break;

    }
    
    else {
      
      cout << "Something is terribly wrong";
    }
  }
}

int math(int &input1, int &op, int &total) {

  if (op == 5) {
    //if x was 1 add
    total = cos(input1);

  }
  else if (op == 6) {
    //if x was 2 subtract
    total = sin(input1);
  }
}

int math(int &input1, int &input2, int &op, int &total) {
  //takes two inputs
  if (op == 1) {
    //if x was 1 add
    total = input1 + input2;
  }
  else if (op == 2) {
    //if x was 2 subtract
    total = input1 - input2;
  }
  else if (op == 3) {
    //if x was 3 divide
    total = input1/input2;
  }
  else if (op == 4) {
    //if x was 4 multiply
    total = input1 * input2;

  }

  else if (op == 7) {

    total = pow(input1,input2);
    
  }
}

int math(int &input1, int &input2, int &input3, int &op, int &total) {
  //takes three inputs
  cout << "this one\n";
  if (op == 1) {
    //if x was 1 add
    total = input1 + input2 + input3;
  }
  else if (op == 2) {
    //if x was 2 subtract
    total = input1 - input2 - input3;
  }
  else if (op == 3) {
    //if x was 3 divide
    total = input1/input2;
  }
  else if (op == 4) {
    //if x was 4 multiply
    total = input1 * input2 * input3;
    
  }
}

int math(int &input1, int &input2, int &input3, int &input4, int &op, int &total) {
  //takes four inputs
  cout << "this one\n";
  if (op == 1) {
    //if x was 1 add
    total = input1 + input2 + input3 + input4;
  }
  else if (op == 2) {
    //if x was 2 subtract
    total = input1 - input2 - input3 - input4;
  }
  else if (op == 3) {
    //if x was 3 divide
    total = input1/input2;
  }
  else if (op == 4) {
    //if x was 4 multiply
    total = input1 * input2 * input3 * input4;
    
  }
}

int math(string &input1, string &input2, int &op, string &total) {
  //takes two inputs

    total = input1 + input2;

    
  }
int math(string &input1, string &input2, string &input3, int &op, string &total) {
  //takes three inputs
  total = input1 + input2 + input3;
  
}

int math(string &input1, string &input2, string &input3, string &input4, int &op, string &total) {
  //takes four inputs
    total = input1 + input2 + input3 + input4;

}

int main() {
  //create variables, strings, and vectors
  int val,first,second,third,fourth,ans,num;
  vector<string> types = {" + ", " - ", " / ", " x ","cos", "sin"}; //stores the different operator signs
  string Cfirst,Csecond,Cthird,Cfourth,Ctotal;

  cout << "Welcome to the calculator!!\n\n"; //print

  while (true) {

    type(val); //call first function to process the operator needed

    cout << "How many numbers would you like to input (max 4 | no more than 1 for cosine and sine and 2 for exp)\n";
    cin >> num; //take input


    if (val == 8) {

      if (num == 1) {

      cout << "Please input the number:\n";

      cin >> Cfirst;

      cout << Cfirst << " = "<< "\n\n" << endl;
      
      }
      else if (num == 2) {

        cout << "Now input the first word:\n\n";
        cin >> Cfirst; //get user input for first number

        cout << "Now input the second word:\n\n";
        cin >> Csecond; //get user input for second number

        math(Cfirst,Csecond,val,Ctotal); //call function with operator number, inputs, and answer variable
        
        cout << Cfirst << " + " << Csecond << " = " << Ctotal << "\n\n" << endl; //print end result
      
      }
      else if (num == 3) {

        cout << "Now input the first word:\n\n";
        cin >> Cfirst; //get user input for first number

        cout << "Now input the second word:\n\n";
        cin >> Csecond; //get user input for second number

        cout << "Now input the third word:\n\n";
        cin >> Cthird; //get user input for first number

        math(Cfirst,Csecond,Cthird,val,Ctotal); //call function with operator number, inputs, and answer variable

        cout << Cfirst << " + " << Csecond << " + " << Cthird << " = " << Ctotal <<  "\n\n" << endl; //print end result

      }
      else if (num == 4) {

        cout << "Now input the first word\n\n";
        cin >> Cfirst; //get user input for first number

        cout << "Now input the second word:\n\n";
        cin >> Csecond; //get user input for second number

        cout << "Now input the third word:\n\n";
        cin >> Cthird; //get user input for first number

        cout << "Now input the fourth word:\n\n";
        cin >> Cfourth; //get user input for second number

        math(Cfirst,Csecond,Cthird,Cfourth,val,Ctotal); //call function with operator number, inputs, and answer variable

        cout << Cfirst << " + " << Csecond << " + " << Cthird << " + " << Cfourth <<  " = " << Ctotal << "\n\n" << endl; //print end result
      }

    }
    else if (num == 1) {

      cout << "Please input the number:\n";

      cin >> first;

      math(first,val,ans);

      cout << types[val-1] << "(" << first << ") " << "= " << ans << "\n\n" << endl;
      
    }
    else if (num == 2) {

      cout << "Now input the first number (not in letters):\n\n";
      cin >> first; //get user input for first number

      cout << "Now input the second number (not in letters):\n\n";
      cin >> second; //get user input for second number

      math(first,second,val,ans); //call function with operator number, inputs, and answer variable
      
      if (val == 7) {

        cout << first << "^" << second << " = " << ans << "\n\n" << endl;
      }

      else {

        cout << first << types[val-1] << second << " = " << ans << "\n\n" << endl; //print end result
      }
    }
    else if (num == 3) {

      cout << "Now input the first number (not in letters):\n\n";
      cin >> first; //get user input for first number

      cout << "Now input the second number (not in letters):\n\n";
      cin >> second; //get user input for second number

      cout << "Now input the third number (not in letters):\n\n";
      cin >> third; //get user input for first number

      math(first,second,third,val,ans); //call function with operator number, inputs, and answer variable

      cout << first << types[val-1] << second << types[val-1] << third << " = " << ans <<  "\n\n" << endl; //print end result

    }
    else if (num == 4) {

      cout << "Now input the first number (not in letters):\n\n";
      cin >> first; //get user input for first number

      cout << "Now input the second number (not in letters):\n\n";
      cin >> second; //get user input for second number

      cout << "Now input the third number (not in letters):\n\n";
      cin >> third; //get user input for first number

      cout << "Now input the fourth number (not in letters):\n\n";
      cin >> fourth; //get user input for second number

      math(first,second,third,fourth,val,ans); //call function with operator number, inputs, and answer variable

      cout << first << types[val-1] << second << types[val-1] << third << types[val-1] << fourth <<  " = " << ans << "\n\n" << endl; //print end result
    }
    else {

      cout << "Please enter a valid response.\n";
    }
  }
  
  return 0;
}