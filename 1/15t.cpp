#include<iostream>
using namespace std;

int primeFactor(int num,int factors[100])
{
    if(num<2)
    return -1;

    int count=0;
    int oring_num=num;
    while(num>1)
    {
        for(int i=2;i<=oring_num;i++)
        {
            while(num%i==0)
            {
                factors[count++]=i;
                num/=i;
            }
        }
    }
    return count;
}

int main()
{
    for(;;)
    {
        cout<<"Enter a number (-1 to Exit):";
        int x;
        cin>>x;
        if(x==-1)
            break;
        int factors[100]={0};
        int count=primeFactor(x,factors);
        for(int i=0;i<count;i++)
            cout<<factors[i]<<", ";
        cout<<endl;
    }

    return 0;
}