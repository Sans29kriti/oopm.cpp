#include<iostream>
using namespace std;

class food
{
    public:
    void tomato()
    {
        cout<<"\ntomato in a food";
    }
};
class onion:public food
{
    public:
    void showonion()
    {
        cout<<"\n onion in a food also";
    }
};
int main()
{
    onion S;
S.tomato();
    S.showonion();
    return 0;
}
