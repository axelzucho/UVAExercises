#include <iostream>
#include <queue>

using namespace std;

struct cmp{
    bool operator()(std::pair<int,float> a, std::pair<int,float> b){
        return a.first > b.first;
    }
};

int main() {
    int duration, depNum;
    float payment, amount, carValue, currentDep;
    int add1, month;
    float add2;
    pair <int,float> adding;
    priority_queue <pair<int,float>,vector <pair<int,float>>, cmp> depriciation;
    cin >> duration >> payment >> amount >> depNum;
    while (duration >= 0)
    {
        carValue = amount;
        for(int i = 0; i < depNum; i++){
            cin >> add1 >> add2;
            adding = make_pair(add1,add2);
            depriciation.push(adding);
        }
        currentDep = depriciation.top().second;
        carValue -= carValue*currentDep;
        depriciation.pop();
        month = 1;
        while(amount >= carValue)
        {
            if(!depriciation.empty() && month == depriciation.top().first){
                currentDep = depriciation.top().second;
                depriciation.pop();
            }
            carValue -= carValue*currentDep;
            amount-=payment;
            month++;
        }
        cout << month << "\n";
        while(!depriciation.empty())
            depriciation.pop();
        cin >> duration >> payment >> amount >> depNum;
    }

}