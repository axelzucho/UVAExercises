#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t, scare, last, N;
    char a;
    cin >> t;
    for (int i = 0; i < t; ++i){
        scare = 0;
        last = -2;
        cin >> N;
        for(int j = 0; j < N; ++j){
          cin >> a;
            if(a == '.')
                if(j - last > 1){
                    ++scare;
                    last = j+1;
                }
        }
        cout << "Case " << i+1 << ": " << scare << "\n";
    }
    return 0;
}