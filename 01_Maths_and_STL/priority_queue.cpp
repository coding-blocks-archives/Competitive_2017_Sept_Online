//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
#include "../helper.h"
using namespace std;

const int inf = (int)1e6;

//remember, the last element is popped in a pq
    bool foo(const int& a, const int& b){
        return a > b;
    }

struct comp{
   //shall a appear before b
    //remember, the last element is popped in a pq
    bool operator()(const int& a, const int& b){
        return a > b;
    }
};

int main(){
    priority_queue<int, vector<int> , foo> q;
    q.push(2);
    q.push(3);
    cout << q.top();   
}