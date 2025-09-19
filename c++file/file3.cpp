#include <iostream>
#include <fstream>

using namespace std;

int main()
{
     //for writing a file
    
    string st1;
    st1 = "My name is Tanjimul";
    ofstream out("1.txt");
    out <<"I read in class four: " +st1;
    out.close();




    //Opening files using constructor and reading it
    string st2;
    ifstream in("1.txt"); // Read operation
    getline(in, st2);
    cout << endl;
    cout <<"I am boy: " + st2;
    //in.close();
    return 0;
}
