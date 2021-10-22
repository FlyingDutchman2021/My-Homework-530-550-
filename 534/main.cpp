#include <iostream>
using namespace std;

int main(){

int array[6], max=0,min=0;
cin>>array[0]>>array[1]>>array[2]>>array[3]>>array[4];
max = array[0];
min = array[0];

 for (int i=0; i<5; i++){
   if (array[i]>max) {max=array[i];}
   if (array[i]<min) {min=array[i];}
 }

cout<<"Largest is "<<max<<endl;
cout<<"Smallest is "<<min<<endl;
    return 0;
}

//Largest is 5
//Smallest is 1