#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <chrono>
#include <thread>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    std::string ColorBet;
    std::string Again;
    int Balance = 10000;
    int r = 1;
    
    std::cout << "Weclome to Roulette!";
    while (r >= 1) {
    std::cout << "\nWhat color would you like to place a bet on? ";
    std::cin >> (ColorBet);
    srand(static_cast<unsigned int>(time(0)));
    

        int number = (rand() % 38);
            
    if (number == 37) {
        number = 00;
    }
    int Bet = 0;
    std::cout << "You have " << Balance << " dollars in your account";
    std::cout << "\nHow much would you like to bet? ";
    std::cin >> (Bet);
    
    
     std::cout << "Rolling..." << std::endl;
        
        std::this_thread::sleep_for(std::chrono::seconds(4));
        system("cls");
        
    std::cout << number;
    
        std::set<int> RedNumbers = {1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};
        std::set<int> BlackNumbers = {2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35};
        
    if (RedNumbers.find(number) != RedNumbers.end()){
    std::cout << " Red";
        if (ColorBet == "red" or ColorBet == "Red") {
        std::cout << "\nWinner";
        Balance = Balance + Bet;
        std::cout << "\nYour balance is now " << Balance << "!";
        if (Balance >= 1) {
                std::cout << "\nWould you like to go again? ";
                std::cin >> (Again);
                if (Again == "Yes" or Again == "yes") {
                r++;
                }
                else {
                r = 0;
                }
            }
            else {
            std::cout << "\nYou ran out of money!";
            r = 0;
            }
        }
        else {
        std::cout << "\nBetter luck next time!";
        Balance = Balance - Bet;
        std::cout << "\nYour balance is now " << Balance << " :(";
        if (Balance >= 1) {
                std::cout << "\nWould you like to go again? ";
                std::cin >> (Again);
                if (Again == "Yes" or Again == "yes") {
                r++;
                }
                else {
                r = 0;   
                }
            }
            else {
            std::cout << "\nYou ran out of money!";
            r = 0;
            }
        }
    }
    else if (BlackNumbers.find(number) != BlackNumbers.end()) {
        std::cout << " Black";
        if (ColorBet == "black" or ColorBet == "Black") {
        std::cout << "\nWinner";
        Balance = Balance + Bet;
        std::cout << "\nYour balance is now " << Balance << "!";
        if (Balance >= 1) {
                std::cout << "\nWould you like to go again? ";
                std::cin >> (Again);
                if (Again == "Yes" or Again == "yes") {
                r++;
                }
                else {
                r = 0;   
                }
            }
            else {
            std::cout << "\nYou ran out of money!";
            r = 0;
            }
        }
        else {
        std::cout << "\nBetter luck next time!";
        Balance = Balance - Bet;
        std::cout << "\nYour balance is now " << Balance << " :(";
            if (Balance >= 1) {
                std::cout << "\nWould you like to go again? ";
                std::cin >> (Again);
                if (Again == "Yes" or Again == "yes") {
                r++;
                }
                else {
                r = 0;   
                }
            }
            else {
            std::cout << "\nYou ran out of money!";
            r = 0;
            }
    }
    }
    else {
        std::cout << "\nGreen\nBetter luck next time!";
    }
}
}
