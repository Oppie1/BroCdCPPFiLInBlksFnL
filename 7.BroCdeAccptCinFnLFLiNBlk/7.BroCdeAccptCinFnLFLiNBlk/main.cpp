#include <iostream>
#include <string>//Must include this library when inputing sentence and not just one word.
using namespace std;




int main() {

	//Declare an uninitialized string var name to store a sentence.
	//CODE:

	//Declare an uninitialized string var name2 to store full name.
	//CODE:
	
	//Declare int var to store age.
	//CODE:

	cout << "What's your name " << endl;

	//Input first users name into program.
	//CODE:

	//Output the name to the screen.
	//CODE:

	cout << "\nWhat is your full name?" << endl;
	//The getline keyword captures everything including white spaces so whole sentence 
	//not just one word read in. "ws", needed here because getline reads everything all 
	//the way to the newline character above. Clears buffer.
	//Use getline to input users full name (name2).
	//CODE:

	//Output statement that shows users full name to screen.
	//CODE:

	cout << "\nHow old are you?" << endl;

	//Input users age using standard cin statement.
	//CODE:
	
	//Output users age the screen.
	//CODE:

	return 0;

}