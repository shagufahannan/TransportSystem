#include<iostream>
using namespace std;
class triangle
{
    int a,b;
public:
    triangle()
    {

    }
    triangle(int a, int b)
    {
        this->a=a;
        this->b=b;
    }

    triangle operator -(triangle p)
    {
        triangle subtract(a-p.a,b-p.b);
        return subtract;
    }
    triangle operator +(triangle p)
    {
        triangle add(a+p.a,b+p.b);
        return add;
    }

    triangle operator *(triangle p)
    {
        triangle mult(a*p.a,b*p.b);
        return mult;
    }

    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
	triangle p1(20,5);
	triangle p2(10,18);
	triangle p3;
	p3 = p1 + p2;
    p3.show();
	p3 = p1 - p2;
    p3.show();
	p3=p1*p2;
	p3.show();

}
