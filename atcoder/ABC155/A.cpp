#include <bits/stdc++.h>
#define log(x) cerr<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b && b != c){
        cout << "Yes" << endl;
    }else if(a != b && b == c){
        cout << "Yes" << endl;
    }else if(a != c && c == b){
        cout << "Yes" << endl;
    }else if(b != c && c == a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}