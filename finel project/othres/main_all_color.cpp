#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h> 



// #include "ColorPrinter.h" 
using namespace std;

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


class color_with_bg {

    int color_fun(int argc, char ** arg){

    ColorPrinter cp; // create a ColorPrinter object
    cp.print("This is red text", FOREGROUND_RED); // print red text
    cp.print("This is green text", FOREGROUND_GREEN); // print green text
    cp.print("This is blue text", FOREGROUND_BLUE); // print blue text
    

    printf("\n");
    printf("\x1B[31mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\x1B[32mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\x1B[33mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\x1B[34mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\x1B[35mTexting\033[0m\n"); 
    cout << endl;
    cout << endl;
    
    
    printf("\x1B[36mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\x1B[36mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\x1B[36mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\x1B[37mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\x1B[93mTexting\033[0m\n"); 
    cout << endl;
    cout << endl;
    
     
     cout << endl;
     
     

    printf("\033[3;42;30mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\033[3;43;30mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\033[3;44;30mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\033[3;104;30mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\033[3;100;30mTexting\033[0m\n"); 
    cout << endl;
    cout << endl;
    

    printf("\033[3;47;35mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\033[2;47;35mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\033[1;47;35mTexting\033[0m\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\t\t"); 
    cout << endl;
    cout << endl;
    
    printf("\n\n\n"); 
    cout << endl;
    cout << endl;
    

    printf("\033[4;47;35mTexting\033[0m\t\t");

    
    return 0;


    }
};

int main (int argc, char ** arg){

    cout << "hello";

    return 0;

}


/*

Name            FG  BG
Black           30  40
Red             31  41
Green           32  42
Yellow          33  43
Blue            34  44
Magenta         35  45
Cyan            36  46
White           37  47
Bright Black    90  100
Bright Red      91  101
Bright Green    92  102
Bright Yellow   93  103
Bright Blue     94  104
Bright Magenta  95  105
Bright Cyan     96  106
Bright White    97  107


*/
