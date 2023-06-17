#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    // use loop to run every number
    for(int i = 1; i <= N; i++){
        cout << i << "*" << i << "=" << i*i << endl;
    }
}