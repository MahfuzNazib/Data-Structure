#include <iostream>

using namespace std;

void Swapping (double &x, double &y)
{
    double temp;
    temp=x;
    x=y;
    y=temp;

    return;

}
int main()
{
    double Numb1=10;
    double Numb2=20;

    cout<<"Before Swapping Value of X = "<<Numb1<<endl;
    cout<<"Before Swapping Value of Y = "<<Numb2<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    Swapping(Numb1,Numb2);

    cout<<"After Swapping Value of X = "<<Numb1<<endl;
    cout<<"After Swapping Value of Y = "<<Numb2<<endl;

    return 0;
}
