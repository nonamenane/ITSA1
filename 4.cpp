#include <iostream>
using namespace std;

//計算加減乘除

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << num1 << "+" << num2 << "=" << num1+num2 << endl;
    cout << num1 << "*" << num2 << "=" << num1*num2 << endl;
    cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
    // num1 > 0, the remainder is >= 0
    if(num1 >= 0) cout << num1 << "/" << num2 << "=" << num1/num2 << "..." << num1%num2 << endl;
    else{
        // use addition/substraction to let remainder be >= 0
        if(num2 > 0)cout << num1 << "/" << num2 << "=" << num1/num2-1 << "..." << num1%num2+num2 << endl;
        else cout << num1 << "/" << num2 << "=" << num1/num2+1 << "..." << num1%num2-num2 << endl;
    }
}