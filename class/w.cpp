#include<iostream>
using namespace std;

class pp{
    int a, b;
    public:
    int sum(int num1, int num2){
        return(num1 + num2);
    }    
    int sum(int num1, int num2, int num3){
        return(num1 + num2 + num3);
    }
};
int main()
{
    pp n1;
    cout<< "sum is: "<< n1.sum(4, 5) << endl;
    cout<< "sum is: "<< n1.sum(4,5,6);
    return(0);
};