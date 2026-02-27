#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    int guess;
    int tries = 1;

    srand(time(0));
    int number = rand() % 100 +1;

    std::cout << "Regan wants you to guess a number in 7 tries!" << std::endl;
    std::cin >> guess;

    while (guess != number) {

    if (guess > number) {
        std::cout << "A little lower! Try again!" << std::endl;
    }
    else {
        std::cout << "A little higher! Try again!" << std::endl;
    }
    tries++;
    std::cin >> guess;

    }

    if (tries < 7) {
     std::cout << "You took " << tries << " tries\n"
     << "Regan got scared and fled!" << std::endl;
    }
    else { 
        std::cout << "You took " << tries << " tries\n" 
        << "You better run because Regan will get you!" << std::endl;
    }

    return 0;
}