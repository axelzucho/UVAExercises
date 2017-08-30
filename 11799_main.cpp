#include <iostream>

using namespace std;

int main() {
    int tests, students, maxSpeed, speed;
    cin >> tests;
    for(int i = 1; i < tests+1; i++){
        cin >> students;
        cin >> maxSpeed;
        for (int x = 1; x < students; x++){
            cin >> speed;
            if(maxSpeed < speed)
                maxSpeed = speed;
        }
        cout << "Case " << i << ": " << maxSpeed << "\n";
    }

}