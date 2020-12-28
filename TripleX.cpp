#include <iostream>

void PrintIntroduction(){
    std::cout << "You're 133337 hacker who's trying to hack into KFC's servers to finally get a hold of the Colonel's secret recipe!\n";
    std::cout << "But first, you need to work out those finger-licking good codes...\n\n";
}

void PlayGame(){
    int CodeA = 4;
    int CodeB = 5;
    int CodeC = 6;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    PrintIntroduction();
    std::cout << "- There are 3 digits in the code.";
    std::cout << "\n- The codes add up to: " << CodeSum;
    std::cout << "\n- The codes multiply to give: " << CodeProduct << std::endl;

    // I'm putting a comment here because the video tutorial told me to.
    /*
    Code blooooooooock
    */

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "You win!\n";
    }
    else {
        std::cout << "You lose :(\n";
    }
}

int main(){
    PlayGame();
    return 0;
}