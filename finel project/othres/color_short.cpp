#include <iostream>
using namespace std;

    string underline(const string &s) {
    return string(s.length(), '-');
}

int  main()
{
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

    //for bold colors, just change the 0 after the [ to a 1
    //for underlined colors, just change the 0 after the [ to a 4
    cout<<"This text is "<< endl <<
    black<<"Black "<< endl
    <<red<<"Red "<< endl;

    cout<<green<<"Green "<<endl 
    <<yellow<<"Yellow "<< endl <<blue<<"Blue\n"<<endl;
    
    cout<<Upurple<<"Underlined Purple "<<endl<<cyan<<"Cyan "<<endl;
    cout<<lgray<<"Light Gray "<<endl<<dgray<<"Dark Gray "<<endl;
    cout<<Bred<<"and Bold Red."<<endl<<normal<<"\n"<<endl;




    constexpr auto TEXT = "I am underlined";
    std::cout << TEXT << std::endl << underline(TEXT) << std::endl;



//     void underlineAndDisplay(const std::string &s);
// std::string underlineWith(const std::string &s, char c);


    return 0;
}