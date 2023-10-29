//single inheritance
#include<iostream>
 using namespace std;
class A
{
    int a;
    public:
    void getdata(void);
    int var_a(void);
};
class B : public A
{
    int b;
    public:
    void gets(void);
    int display(void);
};
void A :: getdata()
{
    cout << "a = ";
    cin >> a;
}
int A :: var_a()
{
    return(a);
}
void B :: gets()
{
    cout << "b = ";
    cin >> b;
}
int B :: display()
{
    return(var_a() + b);
}

int main()
{
    int sum;
    B b1;
    b1.getdata();
    b1.gets();
    sum = b1.display();
    cout << "sum is = " <<sum << endl;
    return 0;
}