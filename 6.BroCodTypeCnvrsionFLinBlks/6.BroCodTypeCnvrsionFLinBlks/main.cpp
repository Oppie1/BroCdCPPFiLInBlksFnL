#include <iostream>
using namespace std;



int main() {

	//Type conversion = conversion of a value of one data type to another.
	//Implicit = automatic
	//Explicit = precede value with new data type (int)

	//These are examples of  implicit - automatic.
	//Declare an int var x and initialize it to 3.14. Then declare double var y to 3.14
	//CODE:

	//Below convert 3.14 to an int then is stored in the double z (as 3)
	//This is explicit (precede value with new data type (int)
	//Declare double z variable and explicitly set it to an int var 3.14
	//CODE:

	//Declare a char var a and set it equal to a number
	//CODE:

	//Output above information to screen.
	//CODE:
	

	//-> So here the x value gets truncated since we'e dealing with an int.
	//->Here the decimal is accounted for

	//-> So we will implicitly caste 100 as a character. We will convert it using acci table to
	// whatever its equivalent is. If 100 is converted into a character it would be letter "d"

	//Explicitly cast number 100 to character which again is the letter d using the data type char and 100.
	//CODE:

	//Write code that calculates a students test score.
	//Declare an int var correct to represent the right answers and initialize it to 8
	//CODE:

	//Declare a var questions to represent total number of questions and initialize it to 10
	//CODE:

	//Assign double variable score to expression of correct divided by questions * 100
	//CODE:

	//Assign another double var score2 to expression of correct divided by questions but in
	//this case use conversion (cast) to set "questions" var to a double to pick up the decimal.
	//CODE

	//We first use int data type and so questions is of int data type and so get truncated version 
	//of answer since we got rid of decimal (which was .8) and the basis of what we were trying
	//to find. So when we cast questions as a double data type we retrain the decimal portion and so 
	//the correct answer which is 80% (.80)

	//Output two statments on two lines demonstrating score1 and score2 versions to screen
	//CODE:

	return 0;

}