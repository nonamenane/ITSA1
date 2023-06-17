#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    // the binary of negative num is equal to num + 256
    if(num < 0) num += 256;
    int cnt = 128;
    for(int i = 0; i < 8; i++){
        cout << num / cnt;
        num %= cnt;
        cnt /= 2;
    }
    cout << endl;
}