/* Written by Jason Ching
 * Exercise taken from Deitel, P., & Deitel, H. (2016). C++ How to Program (10th ed.). Pearson.
***********************************************************************
* 2.16 (Arithmetic) Write a program that asks the user to enter       *
*       two numbers, obtains the two numbers from the user and prints *
*the sum, product, difference, and quotient of the two numbers.       *
***********************************************************************
*/
#include <iostream> //enable input and output

using namespace std; // using standard library namespace

//function main begins
int main() {

    int number1{0}; //first integer to add (initialized to 0)
    int number2{0}; //second integer to add (initialized to 0)
    int sum{0}; //sum of number1 and number2
    int product{0};//product of number1 and number2
    int quotient{0}; //quotient of number1 and number2
    int difference{0}; //difference of number1 and number2


    cout << "Enter first integer: "; //prompt user for first integer
    cin >> number1; // first integer read and stored in number1

    cout << "Enter second integer: "; //prompt user for second integer
    cin >> number2; // second integer read and stored in number2

    sum = number1 + number2; //add the numbers; store the result in sum
    cout << "The sum is " << sum << endl; // display the sum of numbers given; end of line.

    product = number1 * number2; // multiply the numbers; store the result in product
    cout << "The product is " << product << endl; // display the product of numbers given; end of line.

    quotient = number1 / number2; // divide the numbers; store the result in quotient
    cout << "The quotient is " << quotient << endl; //display the quotient of numbers given; end of line

    difference = number1 - number2; // subtract the numbers; store the result in difference
    cout << "The difference is " << difference << endl; //display the difference of numbers given; end of line
    return 0;
} //end function main
