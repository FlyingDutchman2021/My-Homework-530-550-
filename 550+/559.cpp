#include <iostream>
using namespace std;

void calculate(int inputNumbers[2]){
    cout<< (inputNumbers[0] + inputNumbers[1])*(inputNumbers[1] - inputNumbers[0] + 1)/2<<endl;
}


int main(){

bool continueOrNot = true;
int numbers[99][2];
int counter = 0;

while (continueOrNot == true){
    cin>> numbers[counter][0];
    if (numbers[counter][0] == -1 ){
        continueOrNot = false;
    }else{
        cin >> numbers[counter][1];
  
    }
    counter += 1;
}

for (int i = 0; i < counter-1; i++)
{
    calculate(numbers[i]);
}




    return 0;
}