#include <iostream>

int elif(int num)
{
    if(num % 2 == 0)
    {
        std :: cout << "It is an even Number !!\n";
    }
    else if(num % 2 != 0)
    {
        std :: cout << "It is an odd number!!\n";
    }
    else
    {
        std :: cout << "How tf did you access this line !?";
    }
    return 0;
}

int match(int num)
{
    switch(num)
    {
        case 1:
        {
            std :: cout << "The number is one !!";
            break;
        }
        case 2:
        {
            std :: cout << "The number is one !!";
            break;
        }
        case 3:
        {
            std :: cout << "The number is one !!";
            break;
        }
        default:
        {
            std :: cout << "The number is neither 1 , nor 2 , not even 3";
        }
    }
    return 0;
}

int main()
{
    int a;
    std :: cout << "Enter the value of a : ";
    std :: cin >> a;
    elif(a);
    match(a);
    return 0;
}