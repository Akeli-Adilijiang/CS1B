#include<iostream>
using namespace std;

//template <int T=100>
int primeNumber[100]={0};
int index=0;


void  FindPrimeNumber(int x)
{
        for(int j=2;j<=x;j++)
        {
            while(x%j==0)
            {
                primeNumber[index]=j;
                index++;
                x/=j;
            }
            cout<<primeNumber[index]<<endl;

        }
}


int main()
{
    int input=0;
    cout<<"in put a number ";
    cin>>input;

    FindPrimeNumber(input);


    return 0;
}