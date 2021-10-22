#include <iostream>
using namespace std;

void findTheNumbers(int inputNumbers[10]){
    int maxNumber=0, secondMaxNumber=0;
    for (int i = 0; i < 10; i++)
    {
        if (inputNumbers[i] > maxNumber){
            maxNumber = inputNumbers[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if(inputNumbers[i] > secondMaxNumber && inputNumbers[i] < maxNumber){
            secondMaxNumber = inputNumbers[i];
        }
    }
    

    cout<<"Largest is "<<maxNumber<<endl;
    cout<<"Second largest is "<<secondMaxNumber<<endl;
    
    
}


int main(){

    bool continueOrNot=true;
    int numbers[99][10];
    int counter=0;

    while (continueOrNot == true){
        cin>> numbers[counter][0];
        if (numbers[counter][0] == -1){
            continueOrNot = false;
        }else{
            for (int i = 1; i < 10; i++)
            {
                cin >> numbers[counter][i];
            }
            
        }
        counter += 1;

    }

    for (int i = 0; i < counter-1; i++)
    {
        findTheNumbers(numbers[i]);
    }
    


    return 0;
}