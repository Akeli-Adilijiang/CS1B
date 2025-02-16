#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,string>m1({{20,"AAA"},{21,"BBB"},{500,"CCC"},{22,"SSS"},{19,"YYY"}});

    auto first=m1.begin();
    first++;
    auto last=m1.end();
    last--;

    unordered_map<int,string>m2(first,last);
    for(auto& iter:m2)
    {
        cout<<iter.first<<" "<<iter.second<<endl;
    }


    return 0;
}