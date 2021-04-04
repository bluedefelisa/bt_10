#include<iostream>

using namespace std;

const int m = 56;
const int n = 37;
struct Point
{
    int x,y;
    Point(){};
    Point(int _x, int _y)
    {
         x = _x;
         y = _y;
    }
};

void print(const Point& p)
{
    cout <<"("<< p.x <<","<< p.y <<")"<<endl;
}

int main()
{
    Point a(m, n);
    print(a);
    return 0;
}
