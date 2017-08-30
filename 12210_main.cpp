#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int b, s, age, test = 0;
    vector <int> bachelor;
    vector <int> spinster;
    while(cin >> b >> s && (b != 0 && s!= 0)){
        test++;
        //bachelor.resize(b);
        //spinster.resize(s);
        for(int i = 0; i < b; ++i){
            cin >> age;
            bachelor.push_back(age);
        }
        for(int i = 0; i < s; ++i){
            cin >> age;
            spinster.push_back(age);
        }
        sort(spinster.begin(), spinster.end());
        sort(bachelor.begin(), bachelor.end());
        cout << "Case " << test << ": ";
        if(b > s){
            cout << b-s <<  " " << bachelor[0];
        }
        else cout << "0";
        cout << "\n";
        bachelor.clear();
        spinster.clear();
    }
    return 0;
}