#include <iostream>
#include "random.h"


int main() 
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to count what it is." << "\n";
    
    int num;
    for (int count = 1; count <= 7; count++)
    {
        if (count == 1)
        {
            num = Random::get(1,100);
        }
        
        std::cout << "Guess #" << count << ":" << " ";
        int guess {};
        std::cin >> guess;

        if(guess == num)
        {
            std::cout << "Correct! You win!" << " ";
        }
        
        if ((guess == num) or (count == 7))
        {
            std::cout << "Would you like to play again (y/n)? ";
            char ans {};
            std::cin >> ans;
            if (ans == 'n')
            {
                std::cout << "Thank you for playing.";
                return 0;
            }
            else if (ans == 'y')
            {
                count = 0;
            }
            else
            {
                while (ans != 'y' or ans != 'n')
                {
                    std::cout << "Would you like to play again (y/n)? ";
                    char ans {};
                    std::cin >> ans;
                    if (ans == 'n')
                    {
                    std::cout << "Thank you for playing.";
                    return 0;
                    }
                    else if (ans == 'y')
                    {
                        count = 0;
                    }
                }
            }
            
        }

        else if (guess > num)
        {
            std::cout << "Your guess is too high." << "\n";
        }
        else if (guess < num)
        {
            std::cout << "Your guess is too low." << "\n";
        }
        


    }   
    
    return 0;
}