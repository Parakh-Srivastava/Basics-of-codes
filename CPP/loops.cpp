#include <iostream>

int whileLoop(int a)
{
    int b = a + 5;
    while(a < b)
    {
        std :: cout << a << " ";
        a ++;
    }
    return b;
}

int doWhileLoop(int b)
{
    int c = b + 5;
    do
    {
        std :: cout << b << " ";
        b ++;
    }while(b < c);
    std :: cout << std :: endl;
    return c;
}

int forLoop(int c)
{
    for(int i = c; i <= c + 4; i++)
    {
        for(int j = c; j <= i; j++)
        {
            std :: cout << "* ";
        }
        std :: cout << std :: endl;
    }
    return 0;
}

int main()
{
    int a1, a2, a3;
    std :: cout << "Enter the number : ";
    std :: cin >> a1;
    a2 = whileLoop(a1);
    a3 = doWhileLoop(a2);
    forLoop(a3);
}