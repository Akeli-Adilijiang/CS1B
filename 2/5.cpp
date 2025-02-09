//条件编译
#include<iostream>
using namespace std;

int main()
{
//不同操作系统宏定义不同 _WIN32 , __linux__
#ifdef _WIN32
    cout<<"this is win\n";
    typedef long long int64;
#else
    cout<<"it's not win\n";
    typedef long int64;
#endif

    int64 a=10;
    cout<<"a="<<a;

    return 0;
}