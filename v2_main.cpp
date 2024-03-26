#include <iostream>

int game(int a, int b);
int rand_num();

int main(void)
{
    int a, b;
    a = rand_num();
    std::cout << "Answer is: ";
    if(a/100 == 0 && a/10 != 0)
        std::cout << "0";
    else if(a/100 == 0 && a/10 == 0)
        std::cout << "00";
    std::cout << a << "\n";
    
    while(a!=b)
    {
        std::cout << "Enter a guess: ";
        std::cin >> b;

        game(a,b);
    }

    std::cout << "You win!";

    return 0;

}