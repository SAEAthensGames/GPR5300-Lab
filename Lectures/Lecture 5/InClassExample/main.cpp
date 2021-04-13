#include <iostream>
#include <iomanip>
#include <string>
#include <istream>
#include <ostream>
#include <fstream>
#include <sstream>

int main() {
    std:: cout << "This is a message" << std::endl;


    //+ - >> <<

    //<< extraction operator
    // T H I S I S A M E S S
    //

    // >> insert
    // input stream >> Age / Removes the elements from input stream

//    char name[10];
////    std::cin >> name;
////
////    std::cout << name << std::endl;
//
//    char ch;
//    while(std::cin.get(ch)){
//        std::cout << ch << std::endl;
//    }

    //Limit Char from user
    //Manipulators string setw(int)

//    char name[11];
//    std::cin >> std::setw(11) >> name ;
//    std::cout << name << std::endl;
//    std::cin.clear();

//    std::string stringName;
//
//    std::getline(std::cin, stringName);
//    std::cout << stringName << std::endl;

//    char name[20];
//    std::cin.getline(name, 20);
//
//    std::cout << name << std::endl;

    //char c, x, h

    //manipulators setw
    //flags

    //flags
//    std::cout.setf(std::ios::showpos);
//    std::cout << 5 << std::endl;
//    std::cout.unsetf(std::ios::showpos);
//    std::cout << 10 << std::endl;

    //manipulator

////    std::cout.unsetf(std::ios::showpos);
//    std::cout << std::showpos << 50 << '\n' << std::endl ;
//
//    std::cin.clear();
//
//    std::cout << 10 << std::endl;

    //std::cout.setf(std::ios::fixed);
//    std::cout << std::setprecision(3) << 110.8600 << std::endl;

//    std::cout.fill('-');
//    std::cout << std::setw(30) << std::left << -578912345 << std::endl;
//    std::cout << std::setw(30) << std::right << -578912345 << std::endl;
//    std::cout << std::setw(30) << std::internal << -578912345 << std::endl << '\n';
//
//    std::cout.fill(' ');
//
//    std::cout << std::setw(20) << std::left << "HelloWorld" << std::endl;

//    std::stringstream os;
//
//    os << "I'm bad" << std::endl;
//
//    std::string Value;
//    os >> Value; // I'm bad -> Value -> I'm
//    std::cout << Value << std::endl;
//    std::cout << os.str() << std::endl;
//
//    os.str("Hello World");



//      //name age course
//      std::string input;
//
//      std::getline(std::cin, input);
//
//      std::stringstream  os(input);
//
//      struct student{
//          std::string name;
//          std::string course;
//          int age;
//      };
//
//      student newStudent;
//
//      os >> newStudent.name >> newStudent.course >> newStudent.age;
//
//      std::cout << newStudent.name << " " << newStudent.course << " " << newStudent.age << " " << std::endl;


////// INPUT VALIDATION - Numerical
//
//        int newAge;
//
//        //characters, newAge < 0 , 32Kati, 32 Kati
//
//        while(true){
//            std::cout << "Enter your Age:";
//            std::cin >> newAge;
//
//            std::cout << newAge;
//
//            if(std::cin.fail()){
//                std::cin.clear();
//                std::cin.ignore(3000, '\n');
//                continue;
//            }
//
//            std::cin.ignore(3000, '\n');
//            if(std::cin.gcount() > 1){
//                continue;
//            }
//
//            if(newAge < 0){
//                continue;
//            }
//
//            break;
//        }

//    std::ofstream outf{"Score.dat"};
//
//    if(!outf){
//        std::cerr << "Oh, you have a mac , you can't read txt files" << std::endl;
//        return 1;
//    }
//
//    outf << "First Player: 50" << std::endl;
//    outf << "Second Player: 60" << std::endl;

       std::ifstream  inf{"Score.dat"};

       if(!inf){
           std::cerr << "Oh, you have a mac , you can't read txt files" << std::endl;
           return 1; 
       }


       while(inf){
           std::string strInput;
           inf >> strInput;
           std::stringstream os(strInput);
           std::cout << strInput ;
       }

       //ifstream -> Decostructor

       inf.is_open();

       inf.close();
}
