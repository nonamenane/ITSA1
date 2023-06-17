#include <iostream>
using namespace std;
//由鍵盤輸入一個正整數，然後求其所有的因數
int main(){
    int num;
    cin >> num;

    // 1 must be factor
    cout << 1;
    // check every number whether is factor
    for(int i = 2; i <= num; i++){
        if(num % i == 0){
            cout << " " << i;
        }
    }
    cout << endl;
}