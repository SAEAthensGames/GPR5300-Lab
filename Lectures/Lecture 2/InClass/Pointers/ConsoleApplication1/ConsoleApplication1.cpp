// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int size = 5;

    int pcDestroyer[4000000];

    std::cin >> size;

    int* p;

    p = new int[size];

    //p = &size;



    int a = 5;
    int b = 20;

    int* pointera;

    int** pointertopointera;

    pointertopointera = &pointera;

    pointera = &a;

    *pointera = 10;

    std::cout << **pointertopointera << std::endl;

    std::cout << *pointera << std::endl;

    pointera = &b;

    std::cout << *pointera << std::endl;

    //std::cout << pointera << std::endl;

    //std::cout << *pointera << std::endl;

    //std::cout << a << std::endl;

    //std::cout << pointerb << std::endl;

    //Pointer and Arrays

    int sumNum[5] = { 10,50,15,180,42 };
    int* pointToSum;

    pointToSum = &sumNum[0];

    for (int i = 0; i < 10; i+=2) {
        std::cout << *(pointToSum + i) << std::endl;
    }


    //pointToSum = &sumNum[0];

    //std::cout << *pointToSum << std::endl;
    char someChar[5] = { 'H', 'e', 'l', 'l', 'o' };
    char* string2;
    string2 = someChar;

    const char* string = "Hello";

    for (int i = 0; i < 4; i++) {
        std::cout << *(string + i) << std::endl;
    }

    std::cin >> size;
}

