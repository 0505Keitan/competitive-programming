#include <iostream>
using namespace std;

int main()  {
    int a,b;
    cin >> a >> b;
    if(500*a >= b){
        cout << "Yes" << endl;
    }else if(500*a <= b){
        cout << "No" << endl;
    }
}