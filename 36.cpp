#include <iostream>
using namespace std;
//輸入月份，然後判斷其所屬的季節
int main(){
    int month;
    cin >> month;

    // use >= 3 to simplify condition
    if(month >= 3){
        if(month <= 5) cout << "Spring" << endl;
        else if(month <= 8) cout << "Summer" << endl;
        else if(month <= 11) cout << "Autumn" << endl;
        else cout << "Winter" << endl;
    }
    else cout << "Winter" << endl;
}