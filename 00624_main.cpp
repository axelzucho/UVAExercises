#include <iostream>
#include <vector>


using namespace std;
vector <int> length;


pair<int,int> backtrack(int p, int index, int size, int used){
    pair<int,int> check1, check2;
    if(index >= size)
        return make_pair(p,used);
    check2 = backtrack(p, index+1, size, used);
    if(p - length[index] >= 0) {
        check1 = backtrack(p - length[index], index + 1, size, used + (1 << index));
        if (check1.first <= check2.first) return check1;
    }
    return check2;

}

int main() {
    ios::sync_with_stdio(0);
    pair<int,int> result;
    int N, l;
    int tracks;
    while(cin>>N) {

        cin >> tracks;
        for (int i = 0; i < tracks; i++) {
            cin >> l;
            length.push_back(l);
        }
        result = backtrack(N, 0, length.size(), 0);
        for (int i = 0; i < length.size(); ++i) {
            if (result.second % 2 == 1) {
                cout << length[i] << " ";
            }

            result.second /= 2;

        }
        cout << "sum:" << N - result.first << "\n";
        length.clear();
    }

}