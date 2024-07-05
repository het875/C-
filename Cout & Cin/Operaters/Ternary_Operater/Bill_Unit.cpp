#include<iostream>
using namespace std;

int main()
{
    int unit;
    float bill;

    cout<<"enter your used bill units:";
    cin >>unit;

    bill=(unit<100)?unit*0.60:(unit<100 && unit >=300)?(60+(unit-100)*0.80):(unit>300)?(220+(unit-300)*0.90):121546; //rendom value 

    bill=bill < 50 ? 50:bill;

    bill = bill>300?bill+bill*0.15:bill;


    cout<<"Your reading bill amout is : "<<bill;

}