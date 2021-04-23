// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



//Declaration of the class
class Vector {
private:
    const char* name;
public:
    float x;
    float y;
    float z;

    Vector();
    Vector(const char* newName, float newX, float newY, float newZ);
    Vector(Vector& other);

    const char* GetName();
    float GetX();
    void SetX(float a);
};

void PrintVectorStats(Vector);
void AddScalarValueToVector(Vector& other);

//////////////////////////////////////////
////// DEFINITION OF THE CLASS ///////////
//////////////////////////////////////////



void Vector::SetX(float a) {
    x = a;
    std::cout << x << std::endl;
}

float Vector::GetX() {
    return x;
}

//definition of the constructor
Vector::Vector() {
    name = "Hello";
    x = 2;
    y = 0;
    z = 0;
}

Vector::Vector(const char* newName, float newX, float newY, float newZ) {
    name = newName;
    x = newX;
    y = newY;
    z = newZ;
}

Vector::Vector(Vector& other) {
    name = "Hello";
    x = 2;
    y = 0;
    z = 0;
}

const char* Vector::GetName() {
    return name;
}

int main()
{
    Vector v;

    Vector newV("NewHello", 10, 10, 10);

    Vector v2 = v;

    /*v2 = newV;*/


    //std::cout << newV.GetName() << std::endl << newV.GetX() << std::endl;

    //std::cout << v.x << std::endl;

    //std::cout << v2.GetName() << std::endl << v2.x;

    std::cout << newV.x << std::endl;
    std::cout << newV.GetName() << std::endl;

    AddScalarValueToVector(newV); // by reference

    PrintVectorStats(newV); // by value -> copy
}

void AddScalarValueToVector(Vector &other) {
    other.x += 1;
    other.y += 1;
    other.z += 1;

    std::cout << other.GetName() << std::endl << other.x << std::endl;
}

void PrintVectorStats(Vector other) {
    std::cout << other.GetName() << std::endl << other.x << std::endl;
}


//Person a; Person b;  a = b;





