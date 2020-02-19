#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int a;
    vector<int> li;

    rep(i,3){
        cin >> a;
        li.pb(a);
    }

    sort(li.begin(), li.end());
    log(li[0] << " " << li[1] << " " << li[2]);
}