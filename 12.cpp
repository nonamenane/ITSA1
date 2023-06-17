#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double unit_v = 100 - 30*2.54;
    int distance;
    cin >> distance;
    // use ceil to do the round
    cout << (int)ceil(distance * 100 / unit_v) << endl;
}