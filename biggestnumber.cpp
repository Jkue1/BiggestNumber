//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int whole; 
int swhole;
int biggest;
  
  
  cout <<"Please enter a whole number:\n"; 
  std::cin >> whole;
  
  cout <<"Please enter another whole number:\n";
  std::cin >> swhole;

  if (whole > swhole)
    {biggest = whole;}

  else {biggest = swhole;}
  cout <<"Of those two numbers, the biggest is: " << biggest << std::endl;
  cout <<"---------------------------\n";
  cout << endl <<"Thank you for playing.\n";

  return 0;
}
