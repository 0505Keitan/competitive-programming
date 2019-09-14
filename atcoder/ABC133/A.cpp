#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a * b <= c){
        cout << a * b << endl;
    }else if(a * b > c){
        cout << c << endl;
    }
    return 0;
}