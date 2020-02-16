#include <bits/stdc++.h>
#define log(x) cerr<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int a,b;
    cin >> a;
    rep(i, a){
        cin >> b;
        if(b % 2 == 0){
            if(b % 3 == 0 || b % 5 == 0){
                cout << "APPROVED" << endl;
            }
        }else{
            cout << "DENIED" << endl;
        }
    }
}