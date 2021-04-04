#include<iostream>
#include<cstring>

using namespace std;

const char* a = "How can i";
const char* b = " help you?";
struct String
{
    int n;
    char* str;
    String(const char* s)
    {
        n = strlen(s);
        str = new char[n];
        strncpy(str, s, n);
    }
    ~String()
    {
        delete [] str;
    }
    void print(){ cout << str << endl; }
    void append(const char* c)
    {
        int m = strlen(c);
        char* tmp = new char[m + n];
        strncpy(tmp, str, n);
        for(int i = n; i < m+ n; i++)
        {
            tmp[i] = c[i-n];
        }
        tmp[m+n] = '\0';
        delete str;
        str = tmp;
    }
};
int main()
{
    String s(a);
    s.append(b);
    s.print();
    return 0;
}
