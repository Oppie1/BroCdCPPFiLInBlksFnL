#include <iostream>
using namespace std;


int main() {

	//Declare 2 uninitialized int vars num and guess to store the actual number and guessed one.
	//Declare third int var named tries, set it equal to 0.
	//CODE:

	//Seed random num gen (srand()) with arg time which will have its own arg of NULL.
	//CODE:

	//Assign num variable to a random number 1-100. Use the rand() function with modulus of 100. Add 1
	//to cover instances where there is no remainder.
	//CODE:

	cout << "*****Number Guessing Game******\n" << endl;

	//Use a do while loop to make the program. First establish the do statement.
	//CODE:

	cout << "Enter a guess between 1 = 100: ";

	//Input user selection/number into guess variable where it will be stored.
	//CODE:

	//Increment the tries variable by 1.
	//CODE:

	//Use an if statement that will measure whether number user entered (guess) is greater
	//than random number computer produced. Then notify the user that the guess was to high.
	//CODE:

	//Use else/if statement that will cover if users selection is less than the number computer
	//produced one and a statement that say their guess was too low.
	//CODE:

	//Use an else statement that will cover if the users input correctly guessed number the computer
	//stored num/produced. Write a statement to notify user that they guessed correctly
	//and the number of tries it took them.
	//CODE:

//Establish while part of the do/while loop that will ensure the loop will keep running so long as 
//(guess var) DOES NOT equal number (num var) that computer produced/has stored.
//CODE:

//Create statement that will let user know again that they guessed the number/num correctly.
//CODE:

	cout << "\n**************The Guessing Game Has Concluded****************\n" << endl;

}