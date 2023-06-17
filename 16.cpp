#include <iostream>
using namespace std;
//判斷點是不是在圓形內
int main(){
    // the radius = 100, so x^2 + y^2 <= 100^2
    int x, y;
    cin >> x >> y;
    if(x*x + y*y <= 100*100) cout << "inside" << endl;
    else cout << "outside" << endl;
}