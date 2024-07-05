// project
#include <iostream>
#include <ctime>
using namespace std;


// class for color and text style

// class text_style{

//     public :

//     string underline(const string &s) {
//     return string(s.length(), '-');
//     }

// void text_style()
// {
//     char normal[]={0x1b,'[','0',';','3','9','m',0};
//     char black[]={0x1b,'[','0',';','3','0','m',0};
//     char red[]={0x1b,'[','0',';','3','1','m',0};
//     char green[]={0x1b,'[','0',';','3', '2','m',0};
//     char yellow[]={0x1b,'[','0',';','3', '3', 'm',0};
//     char blue[]={0x1b,'[','0',';','3','4','m',0};
//     char Upurple[]={0x1b,'[','4',';','3','5','m',0};
//     char cyan[]={0x1b,'[','0',';','3','6','m',0};
//     char lgray[]={0x1b,'[','0',';','3','7','m',0};
//     char dgray[]={0x1b,'[','0',';','3','8','m',0};
//     char Bred[]={0x1b,'[','1',';','3','1','m',0};

//     //for bold colors, just change the 0 after the [ to a 1
//     //for underlined colors, just change the 0 after the [ to a 4

//     cout<<"This text is "<< endl <<
//     black<<"Black "<< endl
//     <<red<<"Red "<< endl;

//     cout<<green<<"Green "<<endl 
//     <<yellow<<"Yellow "<< endl <<blue<<"Blue\n"<<endl;

//     cout<<Upurple<<"Underlined Purple "<<endl<<cyan<<"Cyan "<<endl;
//     cout<<lgray<<"Light Gray "<<endl<<dgray<<"Dark Gray "<<endl;
//     cout<<Bred<<"and Bold Red."<<endl<<normal<<"\n"<<endl;


//     constexpr auto TEXT = "I am underlined";
//     cout << TEXT << endl << underline(TEXT) << endl;


//     // void underlineAndDisplay(const string &s)
//     // string underlineWith(const string &s, char c);

// }

// };


// create a Constructor  for [ Time & Date ]
class Time_and_date {  

    public :

    Time_and_date(){

        time_t now = time(0);
        tm *ltm = localtime(&now);

        // Print the current date
            cout << "   1.                                       Date: " << ltm->tm_mday 
            << "/" << (ltm->tm_mon + 1) << "/" 
            << (ltm->tm_year + 1900) << endl;

        // Print the current time in the format "HH:MM:SS"
            cout <<"                                            Time: " << ltm->tm_hour << ":" 
            << ltm->tm_min << ":" 
            << ltm->tm_sec << endl;

    }

};

// create a Constructor  for [ Title print ]

class Title : public show_menu {  

    public :

    Title(){


        cout<< endl
            << "  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl 
            << "  *                                                       *" << endl 
            << "  *                    Royal Restaurants                  *" << endl  
            << "  *                                                       *" << endl  
            << "  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl 
            << endl ;

    }

    void p_billno(){

    }

};


class Bill_no {

    public :

    // virtual float billcounting () = 0; 

    Bill_no(){

        cout << "1" << endl;

    }

};



class show_menu {

    public :

    show_menu (){

        #define underline "\033[4m"

        cout << "   -------------------------------------------------------" << endl;

        cout << underline << "\t\t\tMENU" << endl;
        cout << "\033[0m";



        // cout << "                         ------                           " << endl;
        // cout << "   -------------------------------------------------------" << endl;


  // Print the underlined text
    cout << underline << "This is the text which is going to be underlined." << endl;

  // Turn off underlining

    }

};


    string underline(const string &s) {
    return string(s.length(), '-');
    }

int text_style()
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

    cout<<"This text is "<< endl <<
    black<<"Black "<< endl
    <<red<<"Red "<< endl;

    cout<<green<<"Green "<<endl 
    <<yellow<<"Yellow "<< endl <<blue<<"Blue\n"<<endl;

    cout<<Upurple<<"Underlined Purple "<<endl<<cyan<<"Cyan "<<endl;
    cout<<lgray<<"Light Gray "<<endl<<dgray<<"Dark Gray "<<endl;
    cout<<Bred<<"and Bold Red."<<endl<<normal<<"\n"<<endl;

    constexpr auto TEXT = "I am underlined";
    cout << TEXT << endl << underline(TEXT) << endl;

}



int main (){

    Title tl;

    //Bill_no bn;

    Time_and_date tm;

    show_menu sm;

    text_style();


}

