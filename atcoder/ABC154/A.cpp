#include <iostream>
using namespace std;

int main() {
    string A,a,b;
    int n,m;
    cin >> a >> b;
    cin >> n >> m;
    cin >> A;
    if(A == a){
    	n -= 1;
    }else if(A == b){
    	m -= 1;
    }
    cout << n << ' ' << m << endl;
}
