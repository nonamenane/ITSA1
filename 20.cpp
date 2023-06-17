#include <iostream>
using namespace std;

// use recursive function to divide num into >= 16 and < 16 
void change(int a){
    if(a >= 16){
        change(a/16);
        change(a%16);
    }
    else{
        if(a < 10) cout << a;
        else cout << (char)(a-10+65);
    }
}

int main(){
    int num;
    cin >> num;
    change(num);
    cout << endl;
}