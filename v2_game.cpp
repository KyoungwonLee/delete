#include <iostream>

int game(int a, int b)
{
    if (a==b)
        return 0;

    int a1=a/100;
    int a2=(a-a1*100)/10;
    int a3=a-a1*100-a2*10;

    int b1=b/100;
    int b2=(b-b1*100)/10;
    int b3=b-b1*100-b2*10;
    
    int strike=0;
    int ball=0;

    if(a1==b1)
        strike+=1;
    if(a2==b2)
        strike+=1;
    if(a3==b3)
        strike+=1;

    if(a1==b2)
        ball+=1;
    if(a1==b3)
        ball+=1;
    if(a2==b1)
        ball+=1;
    if(a2==b3)
        ball+=1;
    if(a3==b1)
        ball+=1;
    if(a3==b2)
        ball+=1;
    
    std::cout << "Strike: " << strike << ", Balls: " << ball << "\n";
    return 0;
}