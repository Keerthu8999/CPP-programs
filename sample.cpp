#include<iostream>

using namespace std;

class test
{
    public:
    int a, b;
    test();
    test(int x, int y);

    friend ostream& operator<<( ostream& out, const test& x );
};

test::test()
{
    a = b = 0;
}

test::test(int x, int y)
{
    a = x;
    b = y;
}

ostream& operator<<( ostream& out, const test& x ) {
    return out << "a = " << x.a << std::endl << "b = " << x.b << std::endl;
}


int main()
{
    test a(3, 5);
    test b(4, 8);

    cout << a << b << endl;
}

//this works fine
//but if i separate the class to the .h file my compiler will said error
