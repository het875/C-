#include<iostream>
using namespace std;

class massage{


    public :

    void public(){
        cout << "public";
    }

    private:

    void public(){
        cout << "private";
    }
    
    protected:

    void public(){
        cout << "protected";
    }

};


class massage_2 : public p , private p , private p{

    public :

    void d (){

            cout << "class b";

    }

};

int main (){

    massage_2 a;
    a. public();

}