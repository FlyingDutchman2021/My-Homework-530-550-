#include <iostream>
using namespace std;

int main(){

char character;
int returnValue=0;


cin>>character;
returnValue=static_cast<int>(character);

cout<<character<<"'s integer equivalent is "<<returnValue<<endl;


    return 0;
}