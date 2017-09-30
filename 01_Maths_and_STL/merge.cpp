//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
#include "../helper.h"
using namespace std;

const int inf = (int)1e6;

int main(){
    vector<int> a1(2);
    vector<int> a2(2);
    vector<int> res;

    inputContainer(a1.begin(), a1.end());
    inputContainer(a2.begin(), a2.end());

    cout << lexicographical_compare(a1.begin(), a1.end(), 
        a2.begin(), a2.end());

    // printContainer(res.begin(), res.end(), " ");

}