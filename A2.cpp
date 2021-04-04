#include<iostream>

using namespace std;

const int m = 23;
const int n = 14;
struct Point{
    int x, y;
    Point(){};
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    };
};

void printr(const Point& p)
{
    cout <<"("<< p.x <<","<< p.y <<")"<<endl;
    cout << &p << endl;
}

void printv(const Point p){
    cout <<"("<< p.x <<","<< p.y <<")"<<endl;
    cout << &p << endl;
}

int main()
{
    Point a(m, n);
    cout << "Dia chi cua a: " << &a << endl << endl;
    printr(a);
    cout << endl;
    printv(a);
    return 0;
}
