#include <iostream>
#include<vector>
using namespace std;


//typedef vector::pair::string, int>>pairlist_t
//can use typedef as a shorthand identifier to represent whole line of code.
//t = type
//typedef string test_t -> So here we could use text_t to represent string. Show a way to replace using
//namespace std using this logic  using text_t = std::string. By doing this you can just use the text_t
//bar throughout the program.

//Use keyword "using" to create a using data type var named text_t and initialize it to std of scope (::) string.
//CODE:

//Use "using" data type again to assign the name number_t var to an int var.
//CODE:

//Use "using" data type to assign "cout" to a std var type using std (::) scope and cout standard output stream obj.
//CODE:


int main() {

//So below we can replace with this data type with something a bit shorter. 
//****std::string firstName -> change to below. So now the var will behave like a string.
//Use text_t to make a string var named firstName and initialize it to "Adam"
//CODE:

//Now use number_t to create an integer var for age.
//CODE::


//Output name and age to the screen.
//CODE:

//Typedef = reserved keyword used to create additional name (alias) for another data type. New identifier
//for existing type. Helps with readability and reduces typos. Use when there is a clear benefit. 
//Replaced with using (works better with templates.

//std::vector<std::pair<std::string in>>pairlist.

//So here rather than writing that whole line of code above we can just use
//pairlist_t pairlist. -> pairlist_t pairlist.
//Helps with readability and limits typos.
}