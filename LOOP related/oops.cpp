#include <iostream>
using namespace std;
class Human 
{
public:
    string Name;
    int years;
    string university;
    string favouritegame;
    string pastime;
    void Info() 
    {
        cout << "Full Name: " << Name <<endl<<"Age: " << years<<endl<<"University: " <<university<<endl;
    }

    void Interest() 
    {
        cout << Name << " enjoy playing: "<<favouritegame<<endl<<"love: " <<pastime<<endl;
    }
};
int main() 
{
    Human Person1;
    Human Person2;
    Person1.Name = "Tanjimul";
    Person1.years = 20;
    Person1.university = "IIUC";
    Person1.favouritegame = "E-Football";
    Person1.pastime = "playing video game";
    Person2.Name = "Hassan";
    Person2.years = 22;
    Person2.university = "NSU";
    Person2.favouritegame = "Pubg";
    Person2.pastime = "Traveling";
    Person1.Info();
    Person1.Interest();
    Person2.Info();
    Person2.Interest();
    return 0;
}
