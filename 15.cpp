#include <iostream>
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        // the range of square is 0 <= x, y <= 100
        if(x >= 0 && x <= 100 && y >= 0 && y <= 100) cout << "inside" << endl;
        else cout << "outside" << endl;
    }
}