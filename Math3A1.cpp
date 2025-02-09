#include<iostream>
#include<iomanip>
#include<cmath>

float x1=0;//for one side of interval
float x2=0;//other side of interval

float x1s=0;//x1 save from last position
float x2s=0;//x2 save from last position

float mid=0;//mid poit of x1 and x2

//#define Func1 sin(x1)-pow(x1,2)+x1
//#define Func2 sin(x2)-pow(x2,2)+x2

#define Func1 pow(x1,3)-x1+1
#define Func2 pow(x2,3)-x2+1
//可能：递归过深导致栈溢出



using namespace std;

void Search(float f1,float f2)
{
    mid=(x1+x2)/2;//mid point of x1 and x2
    x2=mid;//move x2 to mid point
    f1=Func1;//find y val for curent x1
    f2=Func2;//find y val for curent x2

    if(f1>0&&f2<0 || f1<0&&f2>0)//if one is biger than zero and one is not
    {
        x2s=x2;//update saveed point
        Search(f1,f2);
    }

    else if(f1>0&&f2>0 || f1<0&&f2<0)//if both is on one side
    {
        x2=x2s;//revers saved point
        x1=mid;//reset x1 as mid point
        x1s=x1;//update saveed point
        Search(f1,f2);
    }
    else
    {
        cout<<"Find the point"<<endl;
        cout<<"x= "<<x1<<"Function go path 0"<<endl;

        return;
    }
    
}

int main()
{
    cout<<"Enter x1:";
    cin>>x1;
    cout<<"Enter x2:";
    cin>>x2;

    float f1=Func1;//y val of x1
    float f2=Func2;//y val of x2

    x1s=x1; x2s=x2;//save x1 x2 data

    if( f1>0&&f2<0 || f1<0&&f2>0)//if answer is in the interval
    {
        cout<<"Is in this interval"<<endl;
        Search(f1,f2);
    }
    else
        cout<<"Not in this interval"<<endl;

    return 0;
}