//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
#include "../helper.h"
using namespace std;

const int inf = (int)1e6;

int main(){
    vector<int> v(5);
    inputContainer(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    printContainer(v.begin(), v.end(), " ");  
}