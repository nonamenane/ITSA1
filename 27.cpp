#include <iostream>
using namespace std;

//輸入任意正整數N，並輸出 1*1、2*2、...、N*N之結果。
int main(){
    int num1, num2;
    cin >> num1 >> num2;

    // use swap to confirm that num2 > num1
    if(num1 > num2) swap(num1, num2);
    cout << (num1 + num2) * (num2 - num1 + 1) / 2 << endl;
}