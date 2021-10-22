#include <iostream>
using namespace std;

void judge(int numbers[9]){
    int maxNumber=0;
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i]>maxNumber)
        {
            maxNumber = numbers[i];
        }
        
    }
    cout<<"Largest is "<<maxNumber<<endl;
    
}



int main(){

    int numbers[99][10];
    int counterRow=0, counterColumn=0;
    bool continueOrNot=true;

    while (continueOrNot == true){

        cin>>numbers[counterRow][0];
        if (numbers[counterRow][0] == -1){
            continueOrNot = false;
        }else{
            for (int i = 1; i < 10; i++)
            {
                cin>>numbers[counterRow][i];
            }
            
        }
        counterRow  += 1;

    }

    for (int i = 0; i < counterRow-1; i++)
    {
        judge(numbers[i]);
    }
    



    return 0;
}