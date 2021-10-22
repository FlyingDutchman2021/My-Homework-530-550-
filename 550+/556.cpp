#include <iostream>
using namespace std;



double calculate_x(int input){

    double result;

    result=input;
   for (int i = input-1; i > 0; i--)
   {
       result=result*i;
   }
   return result;
}


void doTheJob(int num1, int num2, double num3, int num4){

    double result=0;
    double returnValue=0;
    
    //Part A
    cout<<"Part A: "<<num1<<"! is "<<calculate_x(num1)<<endl;
   

    //PartB
    result=1;
    for (int i = num2-1; i >0; i--)
    {   
        returnValue=calculate_x(i);
        result= result + (1/returnValue);
    }
    cout<<"Part B: e is "<<result<<endl;


    //Part C
    result=1;
    for (int i = num4-1; i > 0; i--)
    {
        //x^3 calculator
        double tempResult=1;
        for (int i2 = i; i2 > 0; i2--)
        {
            tempResult= tempResult * num3;
        }
        

        result= result + ( tempResult/(calculate_x(i) )   );
        
    }
    cout<<"Part C: e to the "<<num3<<" is "<<result<<endl;
    cout<<endl;
   
    
}




int main(){

  int num1[99],num2[99],num3[99],num4[99];
  int counter;
  bool continueToType=true;

  while (continueToType==true){
      cin>>num1[counter];

      if (num1[counter]==-1){
          continueToType=false;
      }else{
          cin>>num2[counter]>>num3[counter]>>num4[counter];
          counter++;
      }
  }

  for (int i = 0; i < counter; i++)
  {
      doTheJob(num1[i],num2[i],num3[i],num4[i]);
  }
  



    return 0;
}