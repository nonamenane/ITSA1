#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int ans = 1;
    // use loop to do multiplication
    for(int i = 2; i <= n; i++){
        ans *= i;
    }
    cout << ans << endl;
}