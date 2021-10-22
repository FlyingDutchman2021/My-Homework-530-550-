#include <iostream>
using namespace std;


bool check(int number=0){
int num1,num2,num3,num4,num5;
int passNum;

passNum=number%10000;
num1=(number-(passNum))/10000;
number=passNum;

passNum=number%1000;
num2=(number-(passNum))/1000;
number=passNum;

passNum=number%100;
num3=(number-passNum)/100;
number=passNum;

passNum=number%10;
num4=(number-passNum)/10;

num5=passNum;

if (num1==num5 && num2 == num4){
   return true;
}else {return false;};


}



int main(){
  bool indicator=false;
  bool result[100];
  int  input[100];
  int  counter=0;

//initialize arrays

for (int i = 0; i < 100; i++)
{
   result[i]=false;
   input[i]=0;
}



   while (indicator==false){
      cin>> input[counter];

      if (input[counter]==-1){
         indicator=true;
      }else{
         result[counter]= check(input[counter]);
         counter= counter + 1;
      }
   }


   for (int i = 0; i < counter; i++)
   {
      if (result[i] == true){
         cout<<input[i]<<" is a palindrome!!!"<<endl;
      }else {
         cout<<input[i]<<" is not a palindrome."<<endl;
      }
   }
   



    return 0;
}