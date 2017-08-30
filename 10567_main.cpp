#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    vector< vector <int>> chars;
    chars.resize(60);
    string states, query;
    int queries, pos, initialPos, finalPos, p, low, mid, hi, t;
    bool pass;
    cin >> states;
    cin >> queries;
    for(int i = 0; i < states.size(); ++i){
        chars[states[i]-'A'].push_back(i);
    }
    for(int i = 0; i < queries; ++i){
        pass = 1;
        cin >> query;
        pos = 0;
        for(int j = 0; j < query.size(); ++j){
            hi = chars[query[j] - 'A'].size()-1;
            low = 0;
            /*
           while(low<=hi){
               mid = (hi+low)/2;
               t = chars[query[j] - 'A'][mid];
               if(t==pos){
                   low = mid; break;
               }
               if(t < pos)
                   low = mid+1;
               else hi = mid-1;
           }*/
            low = lower_bound(chars[query[j] - 'A'].begin(), chars[query[j] - 'A'].end(),pos) - chars[query[j] - 'A'].begin();
            if(chars[query[j] - 'A'][low] >= pos){
                if(pos == 0)
                    initialPos = chars[query[j] - 'A'][low];
                pos = chars[query[j] - 'A'][low] + 1;

            }

            else{
                cout << "Not matched\n";
                pass = 0;
                break;
            }
        }
        if(pass){
            finalPos = pos-1;
            cout << "Matched " << initialPos << " " << finalPos << "\n";
        }
    }
    return 0;
}