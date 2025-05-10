#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the number guessing game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You found the number in " << attempts << " attempts.\n";
            break;
        }
    }

    return 0;
}