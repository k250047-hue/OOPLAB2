#include<iostream>
using namespace std;
#define PI 3.14159
class Circle
{
    private:
    double r,area,circumference,d;
    public:
    void setradius()
    {   
        double n;
        cout<<endl<<"Enter radius:";
        cin>>n;
        r=n;    
    }
    double getarea()
    {
        area=PI*r*r;
        return area;
    }
    double getdiameter()
    {
        d=r*2;
        return d;
    }
    double getcircumference()
    {
        circumference=2*PI*r;
        return circumference;
    }
    void showinfo()
    {
        cout<<endl<<"Radius: "<<r<<endl<<"Diameter: "<<getdiameter()<<endl<<"Area: "<<getarea()<<endl<<"Circumference: "<<getcircumference()<<endl;
    }
};
int main()
{
    Circle c1;
    c1.setradius();
    c1.showinfo();
}