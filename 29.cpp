#include <iostream>
using namespace std;

// function to check whether is prime number
bool isPrime(int num){
    if(num < 2) return false;
    else if(num == 2 || num == 3) return true;
    else{
        for(int i = 2; i*i <= num; i++){
            if(num % i == 0) return false;
        }
        return true;
    }
}

int main(){
    int num;
    cin >> num;

    // keep minus to find the biggest prime number
    for(int i = num-1;; i--){
        if(isPrime(i)){
            cout << i << endl;
            break;
        }
    }
}