#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty){
    std::cout << "\nYour new objective: work out the codes for level " << Difficulty;
    std::cout << "...\n\n";
}

bool PlayGame(int Difficulty){
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    PrintIntroduction(Difficulty);
    std::cout << "- There are 3 digits in the code.";
    std::cout << "\n- The codes add up to: " << CodeSum;
    std::cout << "\n- The codes multiply to give: " << CodeProduct << std::endl;

    // I'm putting a comment here because the video tutorial told me to.
    /*
    Code blooooooooock
    */

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "*** You've sussed it out! ***\n";
        return true;
    }
    else {
        std::cout << "*** You guessed wrong :( ***\n";
        return false;
    }
}

int main(){
    srand(time(NULL)); // create new random sequence based on time of day
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    std::cout << "\n\nYou're 133337 hacker who's trying to hack into KFC's servers to finally get hold of the Colonel's secret recipe!\n";
    std::cout << "But first, you need to work out those finger-licking good codes.\n\n";

    while (LevelDifficulty <= MaxDifficulty){
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // clears errors
        std::cin.ignore(); // discards the buffer (in case someone inputted stupid things)

        if (bLevelComplete){
            ++LevelDifficulty;
        }
    }

    std::cout << "You found the secret recipe! The secret ingredient is MSG.\n";
    return 0;
}