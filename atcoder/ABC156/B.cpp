#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int N,K;
    int i = 0;
    vector<int> V;
    cin >> N >> K;
    V.pb(N);
    while(true){
        if(V[i]/K == 0) break;
        V.pb(V[i]/K);
        i++;
    }
    log(V.size());
}