#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int N,X,a;
    vector<int> V;
    cin >> N;
    rep(i,N){
        cin >> X;
        V.pb(X);
    }
    rep(e,N){
        a += pow((V[e]-N),2);
    }
    log(a);
}