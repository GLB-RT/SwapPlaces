#include <iostream> //standard input/output stream library
#include <string> //string library to handle strings    
#include <algorithm> //standard Library container template functions that perform algorithms.

int main()
{  
	// Variable to store user input. Unlike in python, we need to declare string by using #include <string>.
    std::string stringReverse;

    // Prompt the user to enter text
    std::cout << "Enter text you want to reverse: ";

    // Read the entire line of input from the user
    std::getline(std::cin, stringReverse);

	// Reverse the string in place. This is done using the std::reverse function from the <algorithm> header.
    std::reverse(stringReverse.begin(), stringReverse.end());
 
    // Output the reversed str
    std::cout << stringReverse;

    return 0;
}