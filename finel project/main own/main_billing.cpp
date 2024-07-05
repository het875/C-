// billing systen project
#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>
#include <stdlib.h> 

using namespace std;

    char normal[]={0x1b,'[','0',';','3','9','m',0};
    char black[]={0x1b,'[','0',';','3','0','m',0};
    char red[]={0x1b,'[','0',';','3','1','m',0};
    char green[]={0x1b,'[','0',';','3', '2','m',0};
    char yellow[]={0x1b,'[','0',';','3', '3', 'm',0};
    char blue[]={0x1b,'[','0',';','3','4','m',0};
    char Upurple[]={0x1b,'[','4',';','3','5','m',0};
    char cyan[]={0x1b,'[','0',';','3','6','m',0};
    char lgray[]={0x1b,'[','0',';','3','7','m',0};
    char dgray[]={0x1b,'[','0',';','3','8','m',0};
    char Bred[]={0x1b,'[','1',';','3','1','m',0};
    


// class for color pointer 
class ColorPrinter
{
private:
    HANDLE hConsole; // the console handle
public:
    ColorPrinter() // constructor
    {
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // get the console handle
    }

    void print(const std::string& text, int color) // print function
    {
        SetConsoleTextAttribute(hConsole, color); // set the color attribute
        std::cout << text << std::endl; // print the text
        SetConsoleTextAttribute(hConsole, 15); // reset the color to default
    }
};



// class display the diffrent types of text with color 
class color_with_bg {

};


// create a Constructor  for [ Title print ]

class Title  {  

    public :

    Title(){


        cout<< endl
            << "  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl 
            << "\x1B[32m  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\033[0m\t\t"<< endl
            << "\x1B[32m  *                                                       *\033[0m\t\t" << endl 
            << "\x1B[31m  *                  \033[1;43;31m  Royal Restaurants  \033[0m\t\t  \x1B[31m*\033[0m\t\t" << endl 
            << "\x1B[32m  *                                                       *\033[0m\t\t" << endl  
            << "\x1B[32m  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\033[0m\t\t" << endl 

            << endl 
            // << "\x1B[31m  *                    Royal Restaurants                  *\033[0m\t\t" << endl 
            // << "\x1B[31m  *                  \033[1;43;31m  Royal Restaurants  \033[0m\t\t  \x1B[31m*\033[0m\t\t" << endl 
            << endl ;

    }

    void p_billno(){

    }

};



int main (){

    cout << "hello";

    cout <<"\x1B[33mTexting\033[0m\t\t" ;

    Title t;


    return 0;
}