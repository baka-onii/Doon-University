#include<iostream>
using namespace std;

class func{
    public:
    void input(float a)
    {
        cout << a << endl;
        return;
    };
    void input(float a, float b, float c)
    {
        cout << a <<endl << b << endl << c;
        return;
    }
};
int main()
{
    func n;
    cout << "First input: ";
    n.input(3.14);
    cout << "Second input: ";
    n.input(3.14, 2.2, 1.1);
}
// ques: Difference between function overloading and function overriding