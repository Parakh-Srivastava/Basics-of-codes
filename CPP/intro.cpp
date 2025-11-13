#include <iostream>
#include <string>

int HelloWorld(std::string a)
{
    char b[13] = "Hello World!";
    std :: cout << b;
    return 0;
}

int main()
{
    HelloWorld("print");
    return 0;
}