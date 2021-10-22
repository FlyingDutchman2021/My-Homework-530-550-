#include <iostream>
using namespace std;

class HeartRates{
    public:

    string firstName,lastName;
    int birthMonth,birthDay,birthYear;
    int currentMonth,currentDay,currentYear;
    int age=0;

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


    HeartRates(string inputFirstName, string inputLastName, int inputMonth, int inputDay, int inputYear){
        setFirstName(inputFirstName);
        setLastName(inputLastName);
        setBirthMonth(inputMonth);
        setBirthYear(inputYear);
        setBirthDay(inputDay);
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

};










int main()
{
   string first, last; // first name, last name
   int month, day, year; // birth month, day, year

   // get user input
   cin >> first >> last;
   cin >> month >> day >> year;

   // create a HeartRates object
   HeartRates heartRates( first, last, month, day, year );

   // display user information
   cout << "First Name: " << heartRates.getFirstName() << "\n";
   cout << "Last Name: " << heartRates.getLastName() << "\n";
   cout << "Date of Birth: " << heartRates.getBirthMonth() << "/"
      << heartRates.getBirthDay() << "/"
      << heartRates.getBirthYear() << "\n";
   cout << "Age: " << heartRates.getAge() << "\n";
   cout << "Maximum Heart Rate: "
      << heartRates.getMaximumHeartRate() << "\n";
   cout << "Target Heart Rate: "
      << heartRates.getMinimumTargetHeartRate() << "-"
      << heartRates.getMaximumTargetHeartRate() << "\n";
      return 0;
} // end main