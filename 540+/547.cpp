#include <iostream>
using namespace std;

class Clock{
    public:
    int hour, minute, second;

    Clock(int inHour, int inMinute, int inSecond){
        hour=inHour;
        minute=inMinute;
        second=inSecond;
    }

    void showin24(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }

    void showin12(){

        if (hour>11){
            cout<<hour-12<<":"<<minute<<":"<<second<<" p.m."<<endl;
        }else{
            cout<<hour<<":"<<minute<<":"<<second<<" a.m."<<endl;
        }
    }

};


int main(){

    int hour,minute,second;
    cin>>hour>>minute>>second;
    Clock clock(hour,minute,second);
    clock.showin24();
    clock.showin12();

    return 0;
}