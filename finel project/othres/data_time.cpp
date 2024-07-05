// DATE AND TIME
#include <iostream>
#include <ctime>
using namespace std;


// int main (){


//     system("CLS");

//     time_t timetoday;
//     time_t (&timetoday);

//     cout << "Date and time as per today is  : " 
//         << asctime(localtime(&timetoday));

//     return 0;

// }


// create a Constructor  for [ Time & Date ]

class Time_and_date {  

    public :

    Time_and_date(){

        time_t now = time (0);

        char *dt = ctime(&now);

            cout << "The local date and time is : " << dt << endl ;

        tm  *gmtm = gmtime(&now);
        dt = asctime(gmtm);

            cout << "The UTC date and time is : " << dt << endl ;

    }

};


int main (){

    Time_and_date tm;

}




/*
//FOR CURRENT TIME ONLY

#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t now = time(0);
  tm *ltm = localtime(&now);

  // Print the current date
  cout << "Today is: " << ltm->tm_mday << "/" << (ltm->tm_mon + 1) << "/" << (ltm->tm_year + 1900) << endl;




  return 0;
}

// output 
// Today is: 03/02/2024


*/

/*

FOR CURRENT TIME ONLY

#include <iostream>
#include <ctime>

using namespace std;

int main() {
  time_t now = time(0);
  tm *ltm = localtime(&now);

  // Print the current time in the format "HH:MM:SS"
  cout << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;

  return 0;
}


//output

//12:00:00

*/