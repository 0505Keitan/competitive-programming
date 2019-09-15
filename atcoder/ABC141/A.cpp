#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a;
    if(a=="Sunny")b="Cloudy";
    if(a=="Cloudy")b="Rainy";
    if(a=="Rainy")b="Sunny";
    cout<<b<<endl;
}