#include<iostream>
#include<conio.h>

class number
{
    private:
    int a,b,c;
    void getdata(void);
    int sum(void);
    public:
    void display(void);
};
void number::getdata(void)
{
    std::cout << "a = ";
   std:: cin >> a;
    std::cout << "b = ";
    std::cin >> b;
}
int number::sum(void)
{
    return(a+b);
}
void number::display(void)
{
    getdata();
    c = sum();
    std::cout << "sum is " << c << std::endl;
}
int main(void)
{
    number n1;
    n1.display();
return(0);
}