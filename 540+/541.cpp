#include <iostream>
using namespace std;


class Date{
    public:
    int month,day,year;

    Date(int inputMonth, int inputDay, int inputYear){
        if (inputMonth>0 && inputMonth<13) {
            month=inputMonth;
        }else{
            month=1;
        }

        day=inputDay;
        year=inputYear;
    }


    int getDay(){
        return day;
    }

    void setDay(int inputDay){
        day=inputDay;
    }

    int getYear(){
        return year;
    }

    void setYear(int inputYear){
        year=inputYear;
    }

    int getMonth(){
        return month;
    }

    void setMonth(int inputMonth){

        if (inputMonth>0 && inputMonth<13){
            month=inputMonth;
        }else{
            month=1;
        }
    }


    void displayDate(){
        cout<<month<<"/"<<day<<"/"<<year<<endl;
    }

};







int main()
{
   int day, month, year;
   cin>>day>>month>>year;
   Date date( month, day,year ); // create a Date object for May 6, 1981

   // display the values of the three Date data members
   cout << "Month: " << date.getMonth() << endl;
   cout << "Day: " << date.getDay() << endl;
   cout << "Year: " << date.getYear() << endl;

   date.displayDate(); // output the Date as 5/6/1981

   // modify the Date 
   cin>>day>>month>>year;
   date.setMonth( month ); // invalid month
   date.setDay( day );
   date.setYear( year );

   date.displayDate(); // output the modified date (1/1/2005)
   return 0;
} // end main