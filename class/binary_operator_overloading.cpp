// syntax: return_type operator symbol (arguments){   }
#include<iostream>
using namespace std;
class bn{
    public:
        int value;
        
        bn(int v)
        {
            value = v;
        };
        friend bn operator+(bn b3, bn b);
};
bn operator+(bn b3, bn b)
    {
        int sm = b3.value + b.value;
        cout << sm;
    };
int main()
{
    bn b1(10);
    bn b2(20);

    bn b3 = b1+b2;
}
// Write a  program on function overloading in which one function contain one float value and other one function contain three float values