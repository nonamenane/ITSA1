#include <iostream>
using namespace std;

int main(){
    int sec;
    cin >> sec;
    /*  1 min = 60 secs
        1 hour = 60 mins = 3600 secs
        1 day = 24 hours = 1440 mins = 86400 secs
    */
    cout << sec/86400 << " days" << endl;
    sec %= 86400;
    cout << sec/3600 << " hours" << endl;
    sec %= 3600;
    cout << sec/60 << " minutes" << endl;
    sec %= 60;
    cout << sec << " seconds" << endl;
}