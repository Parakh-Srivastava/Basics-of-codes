#include <iostream>
#include <string>

int String(std :: string a , int b)
{
    std :: cout << a[b];
    return 0;
}

int main()
{
    std :: string a;
    std :: cin >> a;
    String(a , 5);
}