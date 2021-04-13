// 1st Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//0 = normal, 1 = not okay

#include <iostream>
#include <list>
#include "1st Class.h"
#include <string>

int main()
{
    int x;
    int y;

    std::string c;

    std::cin >> x;
    std::cin >> y;

    auto a = AddNumbers(x, y);

    std::cout << a << std::endl << a + 2 << std::endl << a + 3 << std::endl;

    std::cout << x;
    
    std::cin >> c;
    std::cout << c;
    

    return 0;
}

int AddNumbers(int& a, int& b) {
    auto c = a + b;
    a += 2;
    return c;
}

