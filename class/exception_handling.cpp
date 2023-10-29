#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << endl << "Enter b: ";
    cin >> b;

//     try
//     {
//         {
//             if (b == 0)
//             {
//                 throw c;
//             }
//         }
//         c = a/b;
//         cout << c;
//     }
//     catch(int exp)
//     {
//         cout << "Exception";
//     }
    
//     return 0;    
// } 
    try
    {
        if (a < 0)
        {
            throw a;
        }
        cout << "Accepted";
    }
    catch(int exp)
    {
        cout << "Less than zero values are not accepted" << endl;
    }
    cout << endl << "Hello";
    return 0;
}
   
// ques. With the help of function overriding, find the difference of a and b.
// ques. Difference between Compile Time and run time polymorphism.




// Technique to handle exceptions like division by zero error, index not found error.
// Three Keywords: try, catch, throw
// syntax: try
// {
//     {
//         throw result;
//     }
// }
// catch(return_type exp)
// {
//     cout << "exception";
// }