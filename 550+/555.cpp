#include <iostream>
using namespace std;

bool verify(int A, int B, int C){
    if (A+B>C && A+C>B && B+C>A && (A*A+B*B==C*C || A*A+C*C==B*B || B*B+C*C==A*A)){
        return true;
    }else {
        return false;
    }
}





int main(){

  //type in value
  int lineA[99],lineB[99],lineC[99];
  int counter=0;
  bool continueTypeIn=true;
  int input1,input2,input3;

  while (continueTypeIn==true){
      cin>>input1;
      if (input1==-1){
          continueTypeIn=false;
      }else{
          //store value
          cin>>input2>>input3;
          lineA[counter]=input1;
          lineB[counter]=input2;
          lineC[counter]=input3;
          counter++;
      }
  }
  

  for (int i = 0; i < counter; i++)
  {
      if (verify(lineA[i],lineB[i],lineC[i]) == true){
          cout<<"These are the sides of a right triangle."<<endl;
      }else{
          cout<<"These do not form a right triangle."<<endl;
      }
  }
  


    return 0;
}