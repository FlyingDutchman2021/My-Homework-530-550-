#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double miles[99],gallons[99];
    int counter=0;
    bool continueOrNot=true;
    double totalMiles=0, totalGallons=0;

    while (continueOrNot == true){
        cin>> miles[counter];
        if (miles[counter] != -1){
            //full input + load in + counter move
            cin>> gallons[counter];
            counter += 1;
        }else{
            //exit
            continueOrNot = false;
        }
    }

    //display

    for (int i = 0; i < counter; i++)
    {
        totalMiles= totalMiles + miles[i];
        totalGallons = totalGallons + gallons[i];
        cout<<fixed<<showpoint;
        cout<<setprecision(6)<<"MPG this trip: "<<miles[i]/gallons[i]<<endl;
        cout<<setprecision(6)<<"Total MPG: "<<totalMiles/totalGallons<<endl;

    }
    


    return 0;
}