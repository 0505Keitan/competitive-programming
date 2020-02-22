#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int N,R;
    cin >> N >> R;
    if(N >= 10){
        log(R);
    }else{
        log(R+100*(10-N));
    }
}