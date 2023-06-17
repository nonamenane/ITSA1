#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*每個月打800分鐘以下(含第800分鐘)，每分鐘0.9元；撥打時間介於800分鐘～1500分鐘時，
所有電話費以9折計算；若是打1500分鐘以上(含第1500分鐘)，則通話費將以79折計算，並於顯示其通話費用。*/
int main(){
    int minutes;
    cin >> minutes;

    // confirm that output to the tenth
    cout << fixed << setprecision(1);
    if(minutes <= 800) cout << round(10 * 0.9 * minutes) / 10 << endl;
    else if(minutes < 1500) cout << round(10 * 0.81 * minutes) / 10 << endl;
    else cout << round(10 * 0.79 * 0.9 * minutes) / 10 << endl;
}