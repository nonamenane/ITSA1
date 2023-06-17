#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//計算正方形
int main(){
    double length;
    while(cin >> length){
        double area = length * length;
        cout << fixed << setprecision(1) << round(10*area) / 10 << endl;
    }
}