#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    int N,p;
    double l;
    vector <float> e;
    cin >> N;
    vector <int> A;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        A.push_back(x);
    }
    for(int j=0; j < A.size();j++){
        p = p+A[j]; 
    }
    l=p/N;
    
    cout << round(l) << endl;
}