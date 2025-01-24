#include<iostream>
using namespace std;

const int row=4;
const int col=4;

char arr[row][col]={{'A','B','C','D'},
                    {'E','F','G','H'},
                    {'I','J','K','L'},
                    {'M','N','O','P'}};


bool FindString(string str,int len)
{
    for(int x=0;x<row;x++)
    {
       for(int y=0;y<col;y++)
        {
            if(arr[x][y]==str[0])
            {
                    if(len==1)
                        return true;
                    else
                    {
                        if(arr[x][y]==str[1])
                        {
                            if(ContinueLooking(str,len))
                                return true;
                            else
                                return false;
                        }

                    }
            }
        }
    }
    return false;
}

bool ContinueLooking(string s,int len)
{

    return false;
}

int main()
{
    string str={0};
    int strl=0;

    cout<<"Enter the word you want to find: ";
    cin>>str;
    strl=str.length();

    if (FindString(str,strl))
        cout<<"word found"<<endl;
    else
        cout<<"can't found"<<endl;


    return 0;
}