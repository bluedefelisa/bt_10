#include<iostream>

using namespace std;

const int m = 56, n = 27, u = 3, v= 70;

struct Point{
    double x,y;
    Point(){};
    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    };
};

void print(const Point& p)
{
    cout <<"("<< p.x <<","<< p.y <<")"<<endl;
}
Point mid_point(const Point& a, const Point& b)
{
    Point t;
    t.x = (a.x + b.x) / 2;
    t.y = (a.y + b.y) / 2;

    return t;
}

int main()
{
    Point a(m, n);
    Point b(u, v);
    Point c = mid_point(a, b);
    print(c);

    return 0;
}
