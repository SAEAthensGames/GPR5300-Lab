//Create a dynamic array that the size  is given from the user

#include <iostream>
using namespace std;



class IntegerArray {
public:
    int* data;
    int size;
    IntegerArray(int size) {
        data = new int[size];
        this->size = size;
    }
    //Custom Copy Constructor
    IntegerArray(IntegerArray &other) {
        data = new int[other.size];
        size = other.size;
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
            //*(data + i)
        }
    }
    //Deconstructor
    ~IntegerArray() {
        delete[] data;
        cout << "memory is free" << endl;
    }
};

int AddElements(IntegerArray);

int main()
{
    cout << "How many entries: " << endl;
    int num;
    cin >> num;
    IntegerArray intarray(num);
    intarray.data[0] = 4;
    intarray.data[1] = 2;

    cout << "Give again entries" << endl;
    cin >> num;

    if (true) {
        //If Scope
        IntegerArray b = intarray; // Invoke custom copy instructor
        
        //Without Copy Constructor
        // b.data = a.data
        // b.data[0] = a.data[0] = memory adress tade
        //delete b.data -> delete b.data[0] = a.data[0] = memory adress tade

        // b:100->5 / 101->10 / 102->20 , a:100 / 101 / 102
        // delete b.data -> delete 100, 101, 102
        // a??? 100? 101? 102?

        //Copy Constructor
        // b.data[0] = a.data[0] 
        // *(b.data) = *(a.data)
        cout << b.data[0] << " " << b.data << endl;

        AddElements(b);
        //Deconstructor
    }

    cout << intarray.data[0] << " " << intarray.data << endl;

    //Deconstructor intarray;


}

int AddElements(IntegerArray b) {
    b.data[0] += 1;
    return 0;
}
 




