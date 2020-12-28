#include <iostream>

int main(){
    std::cout << "You're 133337 hacker who's trying to hack into KFC's servers to finally get a hold of the Colonel's secret recipe!";
    std::cout << std::endl;
    std::cout << "But first, you need to work out those finger-licking good codes...";

    int CodeA = 4;
    int CodeB = 5;
    int CodeC = 6;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "- There are 3 digits in the code." << std::endl;
    std::cout << "- The codes add up to: " << CodeSum << std::endl;
    std::cout << "- The codes multiply to give: " << CodeProduct << std::endl;

    // I'm putting a comment here because the video tutorial told me to.
    /*
    Code blooooooooock
    */

   int PlayerGuess;

   std::cin >> PlayerGuess;

   std::cout << "You have entered: " << PlayerGuess;

    return 0;
}