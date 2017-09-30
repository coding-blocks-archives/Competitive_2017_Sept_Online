//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
#include "../helper.h"
using namespace std;

const int inf = (int)1e6;
typedef pair<int, int> ii;

map<ii, string> table;




int main(){
    int numCodes;
    cin >> numCodes;
    for(int i = 0; i < numCodes; ++i){
        ii code;
        string name;
        cin >> code.first >> code.second;
        cin >> name;
        // getline(cin, name);
        table[code] = name;
    }

    int tCases;
    cin >> tCases;
    for (int i = 0; i < tCases; ++i){
        ii codeAsked;
        cin >> codeAsked.first >> codeAsked.second;
        cout << table[codeAsked] << endl;
    }
    return 0;
}   
