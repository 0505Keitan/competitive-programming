#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int a,b;
    while(true){
        cin >> a >> b;
        if(a==0 && b==0) break;
        if(a>=b){
            log(b << " " << a);
        }else if(a<b){
            log(a << " " << b);
        }
    }
}