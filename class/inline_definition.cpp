#include<iostream>
// using namespace std;
class number
{
    private:
    int a, b;
    public:
    void getdata()
    {
        std::cout << "a = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
    }
    void display()
    {
        std::cout << "Value is " << std::endl;
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
    }
};
int main()
{
    number n1;
    n1.getdata();
    n1.display();
return(0);
}