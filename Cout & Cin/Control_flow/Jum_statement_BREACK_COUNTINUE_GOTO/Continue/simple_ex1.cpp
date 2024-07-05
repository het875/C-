#include<iostream>
using namespace std;

int main (){

int i = 0;

  while (i < 10) {

    if (i == 0 || i == 5 || i == 8 ) {

      i++;

      continue;

    }

      cout<<"\n"<< i;

    i++;

  }

}

/*

1
2
3
4
6
7
9

*/