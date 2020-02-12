#include <iostream>
using namespace std;

int main() {
    string a,b;
    cin >> a;
    for(int i = 0;i<a.length();i++){
        b += 'x';
    }
    cout << b << endl;
}
