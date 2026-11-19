#include<iostream>
using namespace std;

class Vehicle
{
public:
    void start(){
        cout<<"Vehicle started"<<endl;
    }
};
class car:public Vehicle{
    public:
    void drive(){
        cout<<"car is moving";
    }
};

int main() {
    car c;
    c.start();
    c.drive();

    return 0;
}
