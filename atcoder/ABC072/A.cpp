#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b;
    if(a-b >= 0)c=a-b;
    if(a-b < 0)c=0;
    cout<<c<<endl;
}