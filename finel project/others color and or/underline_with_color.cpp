//underline with color
#include<iostream>

using namespace std;


int main (){



    char normal[]  ={0x1b,'[','0',';','3','9','m',0};
    char black[]   ={0x1b,'[','0',';','3','0','m',0};
    char red[]     ={0x1b,'[','0',';','3','1','m',0};
    char green[]   ={0x1b,'[','0',';','3','2','m',0};
    char yellow[]  ={0x1b,'[','0',';','3','3','m',0};
    char blue[]    ={0x1b,'[','0',';','3','4','m',0};
    char Upurple[] ={0x1b,'[','4',';','3','5','m',0};
    char cyan[]    ={0x1b,'[','0',';','3','6','m',0};
    char lgray[]   ={0x1b,'[','0',';','3','7','m',0};
    char dgray[]   ={0x1b,'[','0',';','3','8','m',0};
    char Bred[]    ={0x1b,'[','1',';','3','1','m',0};
    //for bold colors, just change the 0 after the [ to a 1
    //for underlined colors, just change the 0 after the [ to a 4
    cout<<"This text is "<< black<<"Black "<<red<<"Red ";
    cout<<green<<"Green "<<yellow<<"Yellow "<<blue<<"Blue\n";
    cout<<Upurple<<"Underlined Purple "<<cyan<<"Cyan ";
    cout<<lgray<<"Light Gray "<<dgray<<"Dark Gray ";
    cout<<Bred<<"and Bold Red."<<normal<<"\n";

}