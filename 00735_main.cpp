#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    set <int> score;
    score.insert(0);
    for(int i = 1; i <=20; ++i){
        score.insert(i);
        score.insert(i*2);
        score.insert(i*3);
    }
    score.insert(50);
    vector <int> scores;
    for(set<int>::iterator it = score.begin(); it != score.end(); ++it){
        scores.push_back(*it);
    }
    int points, per,size;
    size = scores.size();
    while(cin >> points && points > 0){
        set< set <int>> com;
        for(int i = 0; i < size; ++i){
            for(int j = 0; j < size; ++j){
                for(int k = 0; k < size; k++){
                    if(scores[i] + scores[j] + scores[k] == points){
                        set <int> com1;
                        com1.insert(i);
                        com1.insert(j);
                        com1.insert(k);
                        com.insert(com1);
                    }
                }
            }
        }
        int permutations = 0;
        for(set< set <int>>::iterator it = com.begin(); it != com.end(); ++it){
            if((*it).size() == 1)
                ++permutations;
            else if((*it).size() == 2) permutations+=3;
            else permutations+=6;
        }
        if(com.size() != 0){
            cout << "NUMBER OF COMBINATIONS THAT SCORES " << points << " IS " << com.size() << ".\n";
            cout << "NUMBER OF PERMUTATIONS THAT SCORES " << points << " IS " << permutations << ".\n";
        }
        else cout << "THE SCORE OF " << points << " CANNOT BE MADE WITH THREE DARTS.\n";
        cout << "**********************************************************************\n";

    }
    cout << "END OF OUTPUT\n";



}