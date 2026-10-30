#include<iostream>
using namespace std;

class father
{
    public:
    void property()
    {
        cout<<"\nproperty of father";
    }
};
class mother:public father
{
    public:
    void jewellery()
    {
        cout<<"\n jewellery of gold";
    }
};
class son:public mother
{
    public:
    void toys()
    {
        cout<<"\n son has everything";
    }
};
int main()
{
son S;
S.property();
    S.jewellery();
    return 0;
}
