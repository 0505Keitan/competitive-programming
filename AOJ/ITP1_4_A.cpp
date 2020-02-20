#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    double a,b;
    cin >> a >> b;
    int d = a/b;
    log(d << " " << fmod(a,b) << " " << fixed << setprecision(8) << a/b);
}