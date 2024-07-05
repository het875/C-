#include<iostream>
using namespace std;

int main()
{
   int i,n;

  

   int arr[n];

   cout<<"\nEnter "<<n<<" elements for the array:\n";

   for(i=0; i<n; i++)
   {
      cout<<"arr["<<i+1<<"] = ";
      cin>>arr[i];
   }

   cout<<"\nThe array is:\n";

   for(i=0; i<n; i++)

      cout<<arr[i]<<"  ";

   cout<<endl;

   return 0;
}


/*


Enter the size for the array: 5

Enter 5 elements for the array:
arr[1] = 5
arr[2] = 6
arr[3] = 2
arr[4] = 65
arr[5] = 45

The array is:
5  6  2  65  45


*/