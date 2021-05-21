// MemoryManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class IntegerArray {
    int* dataArray;
    int arraysize;
public:
    IntegerArray(int size) {
        arraysize = size;
        dataArray = new int[arraysize];
        for (int i = 0; i < arraysize; i++)
        {
            dataArray[i] = 0;
        }
    }

    ~IntegerArray() {
        std::cout << "Object is done, died" << std::endl;
        delete[] dataArray;
    }

    int GetArraySize() {
        return arraysize;
    }

    int* GetArray() {
        return dataArray;
    }
};

int* ReturnNewNUmber();
int ReturnNewNumberIdiotProgramming();


int hello;
int hello2;

int main()
{
    //int choice;
    //std::cin >> choice;
    //int* p = &choice;



    //if (choice > 20) {
    //    IntegerArray a(choice);

    //    std::cout << "The size of the array is: " << a.GetArraySize() << std::endl;

    //    int* c = new int[20];

    //    c[0] = 32;
    //    c[1] = 20;

    //    std::cout << c[0] << c[1] << std::endl;

    //    delete[] c;

    //    //std::cout << c[0] << std::endl;
    //    p = a.GetArray();

    //    p[0] = 40;
    //    for (int i = 0; i < a.GetArraySize(); i++)
    //    {
    //        std::cout << p[i] << std::endl;
    //    }
    //}










    //std::cout << p[1] << std::endl;

    //std::cout << "We are out of the if" << std::endl;

    IntegerArray a(10);
    IntegerArray c(20);

    IntegerArray* b = &a;

    std::cout << b->GetArraySize() << std::endl;

    b = &c;

    std::cout << b->GetArraySize() << std::endl;


    //int* a = ReturnNewNUmber();

    //std::cout << *a << std::endl;

    //delete a;

    //int b = ReturnNewNumberIdiotProgramming();

    //std::cout << b << std::endl;

    return 5;
}

int* ReturnNewNUmber() {
    int* b = new int;
    *b = 10;

    return b;
}

int ReturnNewNumberIdiotProgramming() {
    int* b = new int;

    *b = 20;

    int a = *b;

    delete b;

    return a;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
