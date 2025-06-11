#include <iostream>  
#include <string>  
#include <algorithm>

int main()  
{  
    std::string stringReverse;  
    std::cout << "Enter text you want to reverse: ";  
    std::getline(std::cin, stringReverse);   
    std::reverse(stringReverse.begin(), stringReverse.end());  
 
    std::cout << stringReverse;  

    return 0;  
}