#include<iostream>
#include<conio.h>

class number
{
    private:
    int a,b;
    public:
    void getdata(void);
    int var_a(void);
    int var_b(void);
};
void number::getdata(void)
{
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

}
int number::var_a(void)
{
    return(a);
}
int number::var_b(void)
{
    return(b);
}
int main()
{
    int m,n;
    number n1;
    n1.getdata();
    m = n1.var_a();
    n = n1.var_b();
    std::cout << "a = " << m << std::endl;
    std::cout << "b = " << n;
}