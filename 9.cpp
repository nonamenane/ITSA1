#include <iostream>
using namespace std;


//計算I次方
int main(){
    int i;
    cin >> i;
    if(i > 31) cout << "Value of more than 31" << endl;
    else{
        int sum = 1;
        for(int j = 0; j < i; j++) sum *= 2;
        cout << sum << endl;
    }
}