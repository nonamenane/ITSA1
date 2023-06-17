#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int sum = 0;
    for(int i = 1; i <= num; i++){
        // can be divided by 2, 3 is can be divided by 6
        if(i % 6 == 0 && i % 12 != 0) sum += i;
    }
    cout << sum << endl;
}