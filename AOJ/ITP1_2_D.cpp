#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;++i)
using namespace std;

int main() {
    int W,H,x,y,r;

    cin >> W >> H >> x >> y >> r;

    if(x-r < 0 && x+r > W){
        log("No");
    }else if(x-r >= 0 && x+r <= W){
        if(y-r < 0 && y+r > H){
            log("No");
        }else if(y-r >= 0 && y+r <= H){
            log("Yes");
        }else{
            log("No");
        }
    }else{
        log("No");
    }
}