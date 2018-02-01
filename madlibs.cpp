//Authors:Xinrui Li 
#include <iostream>
#include <string>

int main()
{
    std::string adjective;
    double number;
    std::string noun;
    char character;

    std::cout << "what is an adjective?";
    std::cin >> adjective;

    std::cout << "what is a number?";
    std::cin >> number;

    std::cout << "what is a noun?";
    std::cin >> noun;

    std::cout << "what is a character?";
    std::cin >> character;

    std::cout << "A "<< adjective << " dog ate a lot of bones," << std::endl;
    std::cout << "the dog ate" << number << " bones."<< std::endl;
    std::cout << "The dog's " << noun << " hit dog." << std::endl;
    std::cout << "The dog's " << noun << " name is " << character << "." << std::endl;

  return 0;
}
