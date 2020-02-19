#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int a;
    cin >> a;
    log(a/3600 << ":" << (a%3600)/60 << ":" << a%60);
}