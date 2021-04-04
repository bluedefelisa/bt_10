#include<iostream>

using namespace std;

const int u = 12;
struct Ai
{
    int n;
    int *p;
    Ai() {};
    Ai(int _n)
    {
        n = _n;
        p = new int [n];
    };
    ~Ai()
    {
        delete [] p;
    };
    void print()
    {
    cout <<"n =" << n << endl;
    cout << p << endl;
    }
};

int main()
{
    Ai a(u);
    Ai b = a;
    a.print();
    b.print();

    return 0;
}
