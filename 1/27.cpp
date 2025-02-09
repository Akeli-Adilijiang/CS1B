#include<iostream>
using namespace std;

int test() {
    static int counter = 0;
    counter++;
    return counter; 
}
int main() {
    cout << test() << test() << test() << endl;
    return 0;
}
