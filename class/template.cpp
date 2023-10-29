#include<iostream>
using namespace std;
class result{
    public:
    template<class T1, class T2>
    int display(T1 a, T2 b)
    {
        cout << a << b;

    }
};

int main()
{
    result R;
    R.display(5,6);
    return 0;
}

// Templates:
// It identifies when we are passing values
// Types:
// class template, function template
// Syntax: template <class T1, class T2 ___ >
// class result{
//     T1 a;
//     T2 b;

//     result(T1 c, T2 d)
//     {
//         cout << c << d;
//     }    
// }
// int main()
// {
//     result <int, int> R(5,6);
//     result<float, float> Q(5.6, 7.8);
//     result<char, char> P('A', 'B');
//     result<string, string> S("C++", "Program");
// }

ques. What is polymorphism. Explain with an example.
ques. Diff btw unary and binary operator overloading
ques. What is exception handling and explain their three components
ques. What are templates. Explain its type with example