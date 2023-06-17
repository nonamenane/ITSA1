#include <iostream>
using namespace std;

// 遞迴球最大公因數
//如果可以整除 被除數就是最大公因數不行就繼續除餘數
int gcd(int a, int b){
    int r = a%b;
    a = b;
    b = r;
    if(b) return gcd(a, b);
    else return a;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;
}