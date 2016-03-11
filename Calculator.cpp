/* Griffin Hart, 03/10/16, Calculator*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  /*Declare an Integer/Number variable*/
  int first_user_number;
  int second_user_number;
  int total;
  int operation;

  /*Send string to terminal and enter key*/
  cout << "Would you like to add (1), subtract (2), multiply (3), or divide (4)." << endl;
  cout << "Enter an option: ";
  
  /*Takes user input and stores in operation variable. */
  cin >> operation;

  /*Ask for first_user_number variable*/
  cout << "Enter a Number: ";

  /*Store first_user_number */
  cin >> first_user_number;

  /* Ask for second_user_number */
  cout << "Enter a second number: ";

  /*Store second_user_number */
  cin >> second_user_number;

  /*Use the operation*/
  if (operation == 1) 
  { 
    total = first_user_number + second_user_number;
  }
  
  if (operation == 2) 
  {
    total = first_user_number - second_user_number;
  }

  if (operation == 3)
  {
    total = first_user_number * second_user_number;
  }

  if (operation == 4)
  {
    total = first_user_number / second_user_number;
  }

  cout << "Your total is: " << total << endl;

 return 0;
} 
