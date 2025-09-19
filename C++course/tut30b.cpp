#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void distance(){
            cout<<"the distance is: "<<x-y<<endl;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};
int main(){
    Point p(1, 1);
    p.displayPoint();
    p.distance();
    Point q(4, 6);
    q.displayPoint();
    q.distance();
    return 0;
}
