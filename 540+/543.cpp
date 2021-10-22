#include <iostream>
using namespace std;


class HealthProfile {
    public:

    string firstName,lastName;
    char gender;
    int birthMonth,birthDay,birthYear;
    int currentMonth,currentDay,currentYear;
    int height,weight;
    int age=0, BMI=0;

    void setBirthMonth(int inputMonth){
        birthMonth=inputMonth;
    }

    void setBirthDay(int inputDay){
        birthDay=inputDay;
    }

    void setBirthYear(int inputYear){
        birthYear=inputYear;
    }

    int getBirthMonth(){
        return birthMonth;
    }

    int getBirthDay(){
        return birthDay;
    }

    int getBirthYear(){
        return birthYear;
    }

    void setFirstName(string input){
        firstName=input;
    }

    void setLastName(string input){
        lastName=input;
    }

    string getFirstName(){
        return firstName;
    }

    string getLastName(){
        return lastName;
    }

    char getGender(){
        return gender;
    }

    void setGender(char input){
        gender=input;
    }

    int getHeight(){
        return height;
    }

    void setHeight(int input){
        height=input;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int input){
        weight=input;
    }



    HealthProfile (string inFirst, string inLast, char inGender, int inMon, int inDay, int inYear, int inHeight, int inWeight){
        firstName=inFirst;
        lastName=inLast;
        gender=inGender;
        birthMonth=inMon;
        birthDay=inDay;
        birthYear=inYear;
        height=inHeight;
        weight=inWeight;
        cin>>currentMonth>>currentDay>>currentYear;
    }













    int getAge(){

        if (currentMonth<birthMonth){
            age=currentYear - birthYear-1;  
        }
        if (currentMonth==birthMonth){
            if(currentDay<birthDay){
                age=currentYear-birthYear-1;
            }
            else{
                age=currentYear-birthYear;
            }
        }
        if (currentMonth>birthMonth){
            age=currentYear-birthYear;
        }

        return age;
    }

    int getMaximumHeartRate(){
        return 220-age;
    }

    int getMinimumTargetHeartRate(){
        return 0.5*(220-age);
    }

    int getMaximumTargetHeartRate(){
        return 0.85*(220-age);
    }


    int getBodyMassIndex(){
        return weight*0.453592/(height*0.0254*0.0254*height);
    }

};










int main()
{
   string first, last; // first name, last name
   int month, day, year; // birth month, day, year
   int height, weight; // height (inches) and weight (pounds)
   char gender; // gender (M or F)

   // get user input
   cin >> first >> last;
   cin >> gender;
   cin >> month >> day >> year;
   cin >> height >> weight;

   // create a HealthProfile object
   HealthProfile profile( first, last, gender,
      month, day, year, height, weight );

   // display user information
   cout << "First Name: " << profile.getFirstName() << "\n";
   cout << "Last Name: " << profile.getLastName() << "\n";
   cout << "Gender: " << profile.getGender() << "\n";
   cout << "Date of Birth: " << profile.getBirthMonth() << "/"
      << profile.getBirthDay() << "/"
      << profile.getBirthYear() << "\n";
   cout << "Height (inches): " << profile.getHeight() << "\n";
   cout << "Weight (pounds): " << profile.getWeight() << "\n";
   cout << "Age: " << profile.getAge() << "\n";
   cout << "Maximum Heart Rate: "
      << profile.getMaximumHeartRate() << "\n";
   cout << "Target Heart Rate: "
      << profile.getMinimumTargetHeartRate() << "-"
      << profile.getMaximumTargetHeartRate() << "\n";
   cout << "Body Mass Index: " << profile.getBodyMassIndex() << "\n\n";

   // display BMI information table
   cout << "BMI VALUES                        \n";
   cout << "Underweight: less than 18.5       \n";
   cout << "Normal:      between 18.5 and 24.9\n";
   cout << "Overweight:  between 25 and 29.9  \n";
   cout << "Obese:       30 or greater        \n";
   return 0;
} // end main