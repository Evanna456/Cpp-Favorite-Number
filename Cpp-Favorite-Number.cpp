#include <iostream>

int main()
{
    int my_favorite_number;
    std::cout << "What is your favorite number?";
    std::cin >> my_favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl << "No really!! "<< my_favorite_number << " is my favorite number!";
    std::cin.get();
    return 0;
}

