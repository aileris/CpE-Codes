#include <cmath>
#include <iostream>

using namespace std;


int main() 
{
   int initialNum, originalNum, remainder, powerCounter = 0, result = 0, power;
   cout << "Enter an integer: ";
   cin >> initialNum;

   originalNum = initialNum;
    
   while (originalNum != 0) 
   {
      originalNum = originalNum / 10; // Divides until 0.
      powerCounter = powerCounter + 1; // Increments power after each iteration of the previous term.
   }
   originalNum = initialNum;

   while (originalNum != 0) 
   {
      remainder = originalNum % 10; // returns one digit from the integer
      power = round(pow(remainder, powerCounter)); // gets remainder then raises to n, rounded off with the round on the left
      result = result + power; // accumulates the power of the individual digits
      originalNum = originalNum / 10;
   }

   if (result == initialNum)
      cout << "The number, " << initialNum << " is an Armstrong number.";
   else
      cout << "The number, " << initialNum << " is not an Armstrong number.";
   return 0;
}