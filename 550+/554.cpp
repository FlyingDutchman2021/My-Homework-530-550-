#include <iostream>
using namespace std;



void printPattern(int index){
    bool pointer;
    if (index%2 ==0) {
        pointer=true;
    }else {
        pointer=false;
    }


    for (int i = 0; i < index; i++)
    {
        

            if (pointer==true){
                for (int i = 0; i < index; i++)
                {
                    cout<<"*";
                    cout<<" ";
                }
                
                
                pointer=false;
            }else if(pointer==false){

                for (int i = 0; i < index; i++)
                {
                cout<<" ";
                cout<<"*";
                    
                }
                
                pointer=true;
            }
            
        
        cout<<endl;
        
    }
    cout<<endl;
    



}






int main(){


    int index[99];
    int arrayPointer=0;
    bool stopOrNot=false;


    while(stopOrNot==false){

        cin>>index[arrayPointer];
        if (index[arrayPointer]==-1){
            stopOrNot=true;
        }else{arrayPointer++;}
    }

    for (int i = 0; i < arrayPointer; i++)
    {
        printPattern(index[i]);
    }
    




    return 0;
}