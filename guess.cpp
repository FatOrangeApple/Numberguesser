#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main() {
    
    char playagain = 'y';

    while (playagain == 'y') {

    int guess;
    int tries = 1;

    srand(time(0));
    int number = rand() % 100 +1;

    std::cout << "Regan wants you to guess a number in 7 tries!" << std::endl;
    std::cin >> guess;

    while (guess != number) {

    if (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Regan is illiterate, so please enter a number!\n" << "Try again!" << std::endl;
        std::cin >> guess;
        continue;
    }

    if (guess > number) {
        std::cout << "A little lower! Try again!" << std::endl;
    }
    else {
        std::cout << "A little higher! Try again!" << std::endl;
    }
    tries++;
    std::cin >> guess;

    }

    if (tries < 8) {
     std::cout << "You took " << tries << " tries\n"
     << "Regan got scared and fled!" << std::endl;
    }

    else { 
        std::cout << "You took " << tries << " tries\n" 
        << "You better run because Regan will get you!" << std::endl;
    }

    std::cout << "Regan wants to play again! Do you? (y/n)" << std::endl;
    std::cin >> playagain;

    }

    std::cout << "Thanks for playing! See you next time!" << std::endl;
}