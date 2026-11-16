#include<iostream>
using namespace std;



//Using namespace std is not evil when learning coding logic. It saves a ton of time on something AI
//or Linter can fix once you finish your program. Save time and use it!

//These are global versions/variables that can be accessed from main. 
//Declare namespace var first and set int x to 1 in codeblock.
//CODE:

//Do same for namespace second codeblock setting int x to 2.
//CODE:

//Same for third and y = 5
//CODE:

//Declare main program int main(){}
//CODE:

int main() {

	//Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a 
	//unique name. A namespace allows for identically named entities as long as the namespaces are different.

	//Each entity needs its own unique name. With namespace two or more entities can share the same name. This
	//is a local var and can only be accessed in main. Declare an int var x initialized to 0.
	//CODE:

	//Output the above local variable x to the screen with a new line after. 
	//CODE:

	//Use the global var outside main user to define namespace definitions (first, second, third) earlier values
	//outside main. Use "first" with :: -> scope resolution operator allows you to access global variables
	//outside main. This is prefixing the namespace. And use scope resolution operator. It tells the computer
	//to look in global space outside main to access "first" version of x that is found within the first namespace.
	//Output first and second x to the screen using first and second namespace logic.
	//CODE:

	//So entities can have the same name so long as their within a different namespace.

	//If we have an entity without the prefix of namespace it is assumed that we are trying to use the
	//entity used in that particular namespace when wrote like below. Using "using namespace third" and every
	//x following that (assuming there are no modifications to x in between the computer will know to use the
	//namespace third located outside main. 
	
	// Declare "third" by using "using namespace third" in front of it. Since "y" does not exist in main program
	// computer uses the global value we established above main (namespace).
	//Then output the value of x to the screen.
	//CODE:

	//So this would work within local using namespace third but if you then wanted to use second value
	//of x you would have to prefix it.
}