#include <iostream>


using namespace std;

int main() {
    float H, U, D, F, days, climbed, difference;
    cin >> H >> U >> D >> F;
    while(H>0){
        difference = (U*F)/100;
        days = 0;
        climbed = 0;
        while(climbed >= 0  && climbed <= H){
            if(days != 0){
                climbed -= D;
                if(climbed < 0)
                    break;
            }

            if(U > 0)
            climbed += U;
            days ++;
            U-=difference;
        }
        if(climbed <= 0){
            cout << "failure on day ";
        }
        else cout << "success on day ";
        cout << days << "\n";
        cin >> H >> U >> D >> F;
    }
}