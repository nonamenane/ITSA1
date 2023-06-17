#include <iostream>
using namespace std;
//購票計算拆成10元5元1元
int main(){
    int dollar;
    cin >> dollar;
    // divide dollar into 10, 5, 1
    cout << "NT10=" << dollar/10 << endl;
    dollar %= 10;
    cout << "NT5=" << dollar /5 << endl;
    dollar %= 5;
    cout << "NT1=" << dollar << endl;
}