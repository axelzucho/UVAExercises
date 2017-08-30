#include <iostream>
#include <queue>

using namespace std;

struct cmp{
    bool operator()(int a, int b){
        return a > b;
    }
};

int main() {
    int participants, budget, hotels, weeks;
    int possiblePrice, availableBeds;
    int total;
    bool all = true;
    priority_queue<int, vector<int>,cmp> prices;
        cin >> participants >> budget >> hotels >> weeks;
        for(int i = 0; i < hotels; i++){
            cin >> possiblePrice;
            for(int x = 0; x < weeks; x++){
                cin >> availableBeds;
                if(availableBeds >= participants && all){
                    prices.push(possiblePrice);
                    all = false;
                }
            }
            all = true;
        }
    if(!prices.empty())
        total = participants * prices.top();
    else total = budget +1;
        if(total <= budget)
            cout << total << "\n";
        else
            cout << "stay home\n";
        while(!prices.empty())
            prices.pop();


}