// Pointers
// Lecture 02
//

#include <iostream>

int newmain()
{
	//Pointer Declaration and Init
	int a = 100;
	//Integer Pointer Variable 
	int* integerpointer;

	//Getting the memory adress from a variable and save it to integerpointer
	integerpointer = &a;

	//Printing the memory adress that integer pointer holds. Actually is the memory adress of the a variable
	std::cout << integerpointer << std::endl;

	//Printing the value of the integer pointer memory adress
	std::cout << *integerpointer << std::endl;

	//Different types of pointers
	char* charpointer;
	float* floatpointer;
	void* voidpointer;


	//pointer to pointer

	int** megapointer;

	megapointer = &integerpointer;

	//typing the memory adress of the megapointer
	std::cout << megapointer << std::endl;

	//typing the value of the memory adress of the megapointer which is the value of the integerpointer
	std::cout << *megapointer << std::endl;

	//typing the value of the memory address that the interger pointer holds . megapointer -> integerpointer -> a
	std::cout << **megapointer << std::endl;


	//pointer and arrays

	int c[6] = { 0,1,2,3,4,5 };
	int* arraypointer;

	//arraypointer saves the memory adress of the first element of the array
	arraypointer = &c[0];

	//Typing the memory adress that arraypointer holds. Actually is the memory adress of the first element
	std::cout << arraypointer << std::endl;

	//Typing the value of the memory adress of the first element
	std::cout << *arraypointer << std::endl;


	//An array is a pointer... int c[6] means save to this variable 5 integer memory adresses

	//this is valid
	//that means arraypointer holds all the elements of the array
	arraypointer = c;

	//this is not valid
	//c = arraypointer;

	//we can read them like this
	for (int i = 0; i < 6; i++)
	{
		//typing the value of the array pointer and move it in the memory to the next integer memory adress
		//(arraypointer + 1) -> int[0] -> int[1]
		std::cout << *(arraypointer + i) << std::endl;
	}

	//char pointers

	//this is valid
	const char* string = "Hello";

	//this will print the letter H
	std::cout << string[0] << std::endl;

	//same
	std::cout << *string << std::endl;

	//prints the letter e
	std::cout << string[1] << std::endl;
	//same
	std::cout << *(string + 1) << std::endl;


	//dynamic memory and arrays

	//this is valid, an array is a pointer to the memory..
	//allocate 5 integer memory adresses and save them to an integer pointer
	int* array = new int[5]{ 1,2,3,4,5 };

	//when using new keyword we allocate new memory on runtime
	//we also need to deallocate the memory

	//delete
	//delete[]
	//deleting the memory on the array pointer
	delete[] array;

	return 0;

}