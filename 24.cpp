#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int hour, salary;
    
    cout << fixed << setprecision(1);
    while(cin >> hour >> salary){
        // divide work hour into three situation
        if(hour <= 60) cout << hour * salary << endl;
        else if(hour <= 120){
            hour -= 60;
            cout << 60 * salary + round(10 * hour * 1.33 * salary) / 10 << endl;
        }
        else{
            hour -= 120;
            cout << 60 * salary + round(10 * (60 * 1.33 * salary + hour * 1.66 * salary)) / 10 << endl; 
        }
    }
}