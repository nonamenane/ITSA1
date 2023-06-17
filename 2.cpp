#include <iostream>
#include <iomanip>
using namespace std;

//三角形面積

int main(){
    int base, height;
    while(cin >> base >> height){
        double area = (double)base * height / 2;
        cout << fixed << setprecision(1) << area << endl;
    }
}