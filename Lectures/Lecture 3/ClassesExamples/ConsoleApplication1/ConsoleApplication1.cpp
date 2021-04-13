// ClassesExample
//

int GetVector(Vector newVec);

#include <iostream>
//Class Declaration
class Vector {
public:
    const char* name;
    double xStart;
    double xEnd;
    double yStart;
    double yEnd;
    //Constructor

    Vector() {
        name = "Hello";
        xStart = 1.0,
            xEnd = 2.0;
        yStart = 3.0;
        yEnd = 4.0;
    }

    Vector(const char* newName) {
        name = newName;
        xStart = 1.0,
            xEnd = 2.0;
        yStart = 3.0;
        yEnd = 4.0;
    }
    Vector(Vector& other) {
        name = "HelloAgain",
            xStart = other.xStart;
        xEnd = other.xEnd;
        yStart = other.yStart;
        yEnd = other.yEnd;
    }
    ~Vector() {
        std::cout << "Destructor Invoked" << std::endl;
        delete name;
    }
};




int main()
{
    Vector vec;
    std::cout << vec.xStart << std::endl;

    const char* Name = "NewVector";
    //Create a new instance and use the second constructor
    Vector vec2(Name);
    std::cout << vec2.name << std::endl;

    vec = vec2; //Custom Copy Constructor

    std::cout << vec.name << std::endl;
    //This will print HelloAgain as we specified on our custom copy contructor

    //Class pointer with new keyword
    Vector* vec1 = new Vector; //Creating a new class instance in heap memory on runtime
    delete vec1;
    return 0;
}

int GetVector(Vector newVec) {
    std::cout << newVec.xEnd << std::endl;
}