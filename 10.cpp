#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double c;
    cin >> c;
    // f = c*9/5 + 32
    cout << fixed << setprecision(1) << round(10 * (c*9/5 + 32)) / 10 << endl; 
}