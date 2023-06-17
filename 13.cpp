#include <iostream>
using namespace std;

//停車費計算
/*2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費，
停車不能超過當天晚上12點。*/
int main(){
    int start_hour, start_min, leave_hour, leave_min;
    cin >> start_hour >> start_min;
    cin >> leave_hour >> leave_min;
    int parking_min = leave_hour*60 + leave_min - (start_hour*60 + start_min);
    if(parking_min <= 120) cout << 30 * (parking_min / 30) << endl;
    else if(parking_min <= 240){
        parking_min -= 120;
        // it park at least 2 hours, result >= 120
        cout << 120 + 40 * (parking_min / 30) << endl;
    }
    else{
        parking_min -= 240;
        // it park at least 4 hours, result >= 120+160
        cout << 280 + 60 * (parking_min / 30) << endl;
    }
}