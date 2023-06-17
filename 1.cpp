#include <iostream>
#include <iomanip>
using namespace std;

///梯形面積的運算

int main(){
    int upper, lower, height;
    while(cin >> upper >> lower >> height){
        double area = (double)height * (upper + lower) / 2;
        // 小數點第一位
        cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl;
    }
}