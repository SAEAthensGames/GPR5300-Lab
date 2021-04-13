#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>

int main() {

////BASIC STRING MANIPULATION FROM INPUT
//    char buf[10];
//    std::cin >> std::setw(10) >> buf;
//
//    std::cout << buf << std::endl;
//
//
//    //ignore whitespaces
//    //not ignoring
//    char ch;
//    while(std::cin >> ch){
//        std::cout << ch;
//    }
//
//    //ignore whitespaces
//    while(std::cin.get(ch)){
//        std::cout << ch;
//    }

////limit input buffer with cin.get(string)
//    char strBuff[11];
//    std::cin.get(strBuff, 11);
//    std::cout << strBuff << std::endl;
//
//    std::cin.getline(strBuff, 11);
//    std::cout << strBuff << std::endl;
//
//
//    //getting the number of char
//    std::cin.getline(strBuff, 11);
//    std::cout << strBuff << std::endl;
//    std::cout << std::cin.gcount() << std::endl;


////FORMATTING FOR OUTPUT
//    //string version of getline()
//    std::string strBuf;
//    std::getline(std::cin, strBuf);
//    std::cout << strBuf << std::endl;

//    std::cout.setf(std::ios::showpos);
//    std::cout << 5 << std::endl;
//    std::cout.unsetf(std::ios::showpos);
//    std::cout << 7 << std::endl;
//    //this will print +5, 7
//
//
//    // Turn on std::ios::hex as the only std::ios::basefield flag
//    std::cout.setf(std::ios::hex, std::ios::basefield);
//    std::cout << 5 << '\n';

//    std::cout << std::hex << 5 << std::endl;
//    std::cout << 8 << std::endl;
//    std::cout << std::dec << 9 << std::endl;
//
////Precision Manipulators
//    std::cout << std::fixed << '\n';
//    std::cout << std::setprecision(3) << 111.589 << '\n';
//    std::cout << std::setprecision(4) << 111.589 << '\n';
//    std::cout << std::setprecision(5) << 111.589 << '\n';
//    std::cout << std::setprecision(6) << 111.589 << '\n';
//    std::cout << std::setprecision(7) << 111.589 << '\n';
//    //this outputs: 111.589, 111.5890 etc.
//
//    std::cout << std::setprecision(3) << 111.589 << '\n';
//    std::cout << std::setprecision(4) << 111.589 << '\n';
//    std::cout << std::setprecision(5) << 111.589 << '\n';
//    std::cout << std::setprecision(6) << 111.589 << '\n';
//    std::cout << std::setprecision(7) << 111.589 << '\n';
//    //this outputs: 111, 111.5 etc.
//
////Justification
//    std::cout << -98765 << '\n'; // print default value with no field width
//    std::cout << std::setw(10) << -98765 << '\n'; // print default with field width
//    std::cout << std::setw(10) << std::left << -98765 << '\n'; // print left justified
//    std::cout << std::setw(10) << std::right << -98765 << '\n'; // print right justified
//    std::cout << std::setw(10) << std::internal << -98765 << '\n'; // print internally justified
//    //this print:
//    //-98765
//    //      -98765
//    //-98765
//    //      -98765
//    //-      98765
//    std::cout.fill('*');
//    std::cout << std::setw(10) << -98765 << '\n'; // print default with field width
//    //****-98765

////STRINGSTREAM
//    std::stringstream os;
//    //insert some string element intro the stringstream
//    os << "I'm hungry!" << '\n';
//    //or
//    os.str("I'm hungry!");
//
//    //And get the data
//    std::cout << os.str();
//
//    //or
//    std::string strValue;
//    os >> strValue;
//    std::cout << strValue;

////Conversion from numerical to string
//    int value = 50;
//    double value2 = 50.50;
//
//    std::stringstream os;
//    os << value << ' ' << value2;
//
//    std::string strValue, strValue1;
//
//    os >> strValue >> strValue1;
//    std::cout << strValue << ' ' << strValue1;
//    //outputs 50 50.50
//
//    //clear the buffer
//    os.str("");
//    //or
//    os.str(std::string{});
//
//// Conversion from string to numerical
//    os << "1234567 50.50";
//    int nvalue;
//    double nvalue2;
//
//    os >> nvalue >> nvalue2;
//
//    std::cout << nvalue << ' ' << nvalue2;
//    //prints 123456 50.50


////Numerical Validation
//    int newAge;
//
//    while(true){
//        std::cout << "Enter your age";
//        std::cin >> newAge;
//
//        if(std::cin.fail()){
//            std::cin.clear();
//            std::cin.ignore(32767, '\n');
//            continue;
//        }
//        std::cin.ignore(32767, '\n');
//        if(std::cin.gcount()>1){
//            continue;
//        }
//        if(newAge <= 0){
//            continue;
//        }
//        break;
//    }


////FILE OUTPUT
//    std::ofstream  outf {"Test.txt"}; //Creates a file with the name test.txt
//
//    if(!outf){
//        std::cerr << "Oh, you have a mac, you can't read txt files" << std::endl;
//        return 1;
//    }
//
//    outf << "I need to eat" << '\n';
//    outf << "I need to eat meat" << '\n';


////FILE INPUT
//    std::ifstream inf{"Test.txt"};
//
//    if(!inf){
//        std::cerr << "Oh, you have a mac, you can't read txt files" << std::endl;
//        return 1;
//    }
//
//    while (inf){
//        std::string strInput;
//        inf >> strInput;
//        std::cout << strInput << '\n';
//    }
//
//    //We can close explicit the file
//    inf.close();
//
//    return 0;

//When inf goes out of scope, the ifstream will call the
//destructor and will close the file

}
