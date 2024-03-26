#include <iostream>

int game(int a, int b);

int main(void)
{
    int a,b;
    std::cout << "Enter a answer: ";
    std::cin >> a;
    
    while(a!=b)
    {
        std::cout << "Enter a guess: ";
        std::cin >> b;

        game(a,b);
    }

    std::cout << "You win!";

    return 0;

}