#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    // use loop to keep checking whether is can mod == 0
    if(num < 2) cout << "NO" << endl;
    else if(num == 2 || num == 3) cout << "YES" << endl;
    else{
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
}