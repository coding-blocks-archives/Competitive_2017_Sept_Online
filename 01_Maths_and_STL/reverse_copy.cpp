//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
#include "../helper.h"
using namespace std;

const int inf = (int)1e6;

int main(){
    array<int, 5> v;
    vector<int> v2;
    inputContainer(v.begin(), v.end());
    printContainer(v.begin(),v.end());
    reverse_copy(v.begin(), v.end(), back_insert_iterator<vector<int> >(v2));   
    printContainer(v2.begin(),v2.end());
}