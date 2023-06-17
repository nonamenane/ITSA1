#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//英里轉成公里
int main(){
    double mile;
    while(cin >> mile){
        double km = mile * 1.6;
        //round四捨五入
        cout << fixed << setprecision(1) << round(10*km) / 10 << endl;
    }
}