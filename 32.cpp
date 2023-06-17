#include <iostream>
using namespace std;

//一個三位數的整數，其各位數字之立方和等於該數本身
int main(){
    int num;
    cin >> num;

    int tmp = num;
    int sum = 0;
    // use a number to get every digit to calculate
    for(int i = 0; i < 3; i++){
        int t = tmp % 10;
        tmp /= 10;
        sum += (t * t * t);
    }
    if(sum == num) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}