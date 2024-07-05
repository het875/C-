#include<iostream>
using namespace std;

int main (){

    int i,j,k,l;
    int math[4];
    int hindi[4];
    int eng[4];
    int guj[4];
    int total[5];
	float per[5]; 


    cout<<endl;
    for(i=0; i<4; i++){
        cout<<"Enter the maths marks of student "<<i+1<<":";
        cin>>math[i];
    }cout<<endl;
    for(i=0; i<4; i++){
        cout<<"Enter the Hindi marks of student "<<i+1<<":";
        cin>>hindi[i];
    }cout<<endl;
    for(i=0; i<4; i++){
        cout<<"Enter the English marks of student "<<i+1<<":";
        cin>>eng[i];
    }cout<<endl;
    for(i=0; i<4; i++){
        cout<<"Enter the Gujarati marks of student "<<i+1<<":";
        cin>>guj[i];
    }cout<<endl;

    for(int i=0;i<4;i++)
	{
		total[i]=math[i]+hindi[i]+guj[i]+eng[i];
	
		per[i]=(total[i]*100/400);
	}cout<<endl;

    
    for(i=0; i<4; i++){
        cout<<"The marks Of maths student "<<i+1<<": "<<math[i]<<endl;
    }cout<<endl;
    for(i=0; i<4; i++){
        cout<<"The marks Of Hindi student "<<i+1<<": "<<math[i]<<endl;
    }cout<<endl;
    for(i=0; i<4; i++){
        cout<<"The marks Of English student "<<i+1<<": "<<math[i]<<endl;
    }cout<<endl;
    for(i=0; i<4; i++){
        cout<<"The marks Of Gujrati student "<<i+1<<": "<<math[i]<<endl;
    }cout<<endl;
   
    for(i=0; i<4; i++){
        cout<<"Total marks of student "<<i+1<<": "<<total[i]<<endl;
    }cout<<endl;

    for(i=0; i<4; i++){
        cout<<"Percentage marks of student "<<i+1<<": "<<per[i]<<endl;
    }cout<<endl;

}


/*

Enter the maths marks of student 1:98
Enter the maths marks of student 2:96
Enter the maths marks of student 3:95
Enter the maths marks of student 4:63

Enter the Hindi marks of student 1:98
Enter the Hindi marks of student 2:96
Enter the Hindi marks of student 3:95
Enter the Hindi marks of student 4:63

Enter the English marks of student 1:98
Enter the English marks of student 2:96
Enter the English marks of student 3:95
Enter the English marks of student 4:63

Enter the Gujarati marks of student 1:98
Enter the Gujarati marks of student 2:96
Enter the Gujarati marks of student 3:92
Enter the Gujarati marks of student 4:55


The marks Of maths student 1: 98
The marks Of maths student 2: 96
The marks Of maths student 3: 95
The marks Of maths student 4: 63

The marks Of Hindi student 1: 98
The marks Of Hindi student 2: 96
The marks Of Hindi student 3: 95
The marks Of Hindi student 4: 63

The marks Of English student 1: 98
The marks Of English student 2: 96
The marks Of English student 3: 95
The marks Of English student 4: 63

The marks Of Gujrati student 1: 98
The marks Of Gujrati student 2: 96
The marks Of Gujrati student 3: 95
The marks Of Gujrati student 4: 63

Total marks of student 1: 392
Total marks of student 2: 384
Total marks of student 3: 377
Total marks of student 4: 244

Percentage marks of student 1: 98
Percentage marks of student 2: 96
Percentage marks of student 3: 94
Percentage marks of student 4: 61


*/