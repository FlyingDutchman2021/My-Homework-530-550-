#include <iostream>
using namespace std;

class Rectangle {

    private:
    int length,width;

    public:

    void setLength(int input){
        length = input;
    }

    void setWidth(int input){
        width = input;
    }

    int returnArea(){
        return length*width;
    }

};






int main(){
    
    int length,width;
    cin>> length>>width;
    Rectangle rect;
    rect.setLength(length);
    rect.setWidth(width);
    cout<<rect.returnArea()<<endl;

    return 0;
}