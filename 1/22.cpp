#include<iostream>
using namespace std;



int main()
{
    const int size=5;


    //int arr[size]={3,2,7,8,9,11,32,1,5,6};
    int arr[size]={5,2,3,1,4};



    int t=0;
    
    for(int i=size-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                t++;
            }
        }
    }
    for(int x=0; x<size;x++)
    {
        cout<<arr[x]<<" ";
    }
    
    cout<<"swap time: "<<t<<endl;

    return 0;
}