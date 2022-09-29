#include <iostream>
#include <cstring>

using namespace std;

//by Ryan Veith
//9/27/2022
//This is a program that will take in 80 chars and see if the
//alphanumeric characters put in form a palendrome

int main()
{
  //user input
  char input[80];
  //alphanumeric array from user input
  char alphanumeric[80];
  //initialize all array spots as 0 since I get errors otherwise
  for (int a = 0; a < 80; a++)
    {
      input[a] = ' ';
      alphanumeric[a] = ' ';
    }
  cin.get(input, 80);
  //current location in the array
  int number = 0;
  //is it a palendrome (I can not sleep and dont have emacs autocomplet
  //set up though so it needs to be short as possibel.
  bool isPali = true;

  //if it is alphanumeric (a number or letter)
  //add it to the alphanumeric array at spot # and increace #
  for (int a = 0; a < 80; a++)
    {
	if (isalnum(input[a]) != 0)
	{
	  alphanumeric[number] = input[a];
	  number++;
	}
    }
  
  //go through alphanumeric and capitalize
  for (int a = 0; a < number; a++)
    {
      //if it is a a letter
      if (isalpha(alphanumeric[a]) != 0)
	{
	  //capitalize
	  alphanumeric[a] = toupper(alphanumeric[a]);
	}
    }
  
  /* //cout on the array since I dont acually have a closing character on it
  for (int a = 0; a < 80; a++)
    {
      cout << alphanumeric[a];
    }
  cout << " " << endl;
  */

  //now that it is all one array see if it is a palendrome
  //since number is the point that we have filled the second array to
  //check 0 and num then 1 and num-1 and so on
  for (int a = 0; a < (number)/2; a++)
    {
      //2 cout lines for testing (positions of variables to compare
      //                              then the variables to compare
      //cout << a << "  " << number-a << endl;
      //cout << alphanumeric[a] << "  " << alphanumeric[number-1-a]  << endl;

      //if they are not the same char
      if(alphanumeric[a] != alphanumeric[number-1-a])
	{
	  isPali = false;
	  break;
	  //by exiting the loop as soon as we know the answer
	  //the programm is faster
	}
    }
  //if nothing broke its a panedrome
  if (isPali == true)
    {
      cout << "Palindrome." << endl;
    }
  else
    {
      cout << "This is not a palindrome" << endl;
    }
  
  //cout << "done" << endl;
}
