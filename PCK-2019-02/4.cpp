/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a,b;
    vector<string> vc;
    string c;
    cin >> a >> b;
    cin >> c;
    cout << c.size() <<endl;
    
}*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int L, N;
    vector<string> snake;
    string a = "oxo";
    cin >> L >> N;
    cin >> snake[0];
    for(int i = 0; i < N; i++){
        snake.insert(snake[0], a);
    }
}

 