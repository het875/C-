#include<iostream>
using namespace std;

int main (){

  int i = 0;

    jump: 

    if (i <= 10) {

      i++;
      
        cout<<"\n"<< i;
    
      goto jump;    
    }

}

/*

1
2
3
4
5
6
7
8
9
10
11

*/