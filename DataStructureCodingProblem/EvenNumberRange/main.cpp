#include <iostream>

using namespace std;

int main()
{
   int Num1;
   int Num2;
   int Sum=0;

   cout<<"Enter your First Number : ";
   cin>>Num1;

   cout<<"Enter your Last Number : ";
   cin>>Num2;

   cout<<"Your Number Range is "<<Num1<<" To "<<Num2<<endl;

   for(int i=Num1;i<=Num2;i++)
   {
       if(i%2==0)
       {
           cout<<i<<endl;
           Sum=Sum+i;
       }
   }
   cout<<"Sum of All even Number for "<<Num1<<" To "<<Num2<< " Is = "<<Sum<<endl;
    return 0;
}

