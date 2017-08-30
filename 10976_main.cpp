#include <iostream>

using namespace std;



int main() {
    ios::sync_with_stdio(0);
    int k, y;
    int solutions;
    while(cin >> k){
        solutions = 0;
        y = k+1;
        for(y = k+1; y <= 2*k; ++y){
            if((k*y)%(y-k) == 0){
                ++solutions;
            }
        }
        cout << solutions << "\n";
        for(y = k+1; y <= 2*k; ++y){
            if((k*y)%(y-k) == 0){
                cout << "1/" << k << " = " << "1/" << (k*y)/(y-k) << " + 1/" << y << "\n";
            }
        }
    }

}