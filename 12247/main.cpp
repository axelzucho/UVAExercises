#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    int index;
    int aBigger = 0;
    int bBigger = 0;
    vector <int> a;
    vector <int> b;
    for(int i = 0; i < 3; i++){
        cin >> x;
        a.push_back(x);
        if(aBigger < x)
            aBigger = x;
    }
    for(int i = 0; i < 2; i++){
        cin >> x;
        b.push_back(x);
        if(bBigger < x){
            bBigger = x;
            index = i;
        }

    }

    if(aBigger > bBigger)
        cout << "-1\n";
    else {
        if(boy.top() > girl.top()){
            for(int i = 1; i < 53; i++){
                if(i )
            }
        }
    }
    }