//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
// #include "../helper.h"
using namespace std;

const int inf = (int)1e6;

int main() {
    int tc, M, N, K;
    char config[100][100];
   
    cin >> tc;
    for (int c = 0; c < tc; ++c) {
        cin >> M >> N >> K;

        vector<int> v(M, 0);

        for (int row = 0; row < M; ++row) {
            for(int col = 0; col < N; ++col){
                cin >> config[row][col];
                if (config[row][col] == '*') ++v[row];
            }
        }

        sort(v.begin(), v.end(), less<int>());  //sorts in descending order
        int i = 0;

        while(K > 0 && i < v.size() && N - v[i] > v[i]){
            //turn on the off lamps
            v[i] = N - v[i];
            ++i;
            --K;
        }

        //if K is not zero, some needs to be toggled
        //choose the one with lowest lit lamp
        auto it = min_element(v.begin(), v.end());
        if (K & 1) *it = N - *it;
        cout << accumulate(v.begin(), v.end(), 0) << "\n";
    }
    return 0;
}