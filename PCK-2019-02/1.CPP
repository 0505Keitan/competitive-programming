#include <iostream>
using namespace std;

int main() {
    double a,b,c;
    cin >> a >> b >> c;
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    cout << 360/a*b/(360/c) <<endl;
}