#include <iostream>

int game(int a, int b);
int rand_num();

int main(void)
{
    int a, b;
    int count = 5;
    a = rand_num();
    std::cout << a << "\n";

    std::cout << count << " chances left." << "\n";
    
    while(a != b)
    {
        std::cout << "Enter a guess: ";
        std::cin >> b;

        game(a,b);

        if(a != b)
        {
            count -= 1;
            if(count == 0)
            {
                std::cout << "You lose";
                return 1;
            }
            std::cout << count << " chances left."; 
        }
    }

    std::cout << "You win!";

    return 0;
}