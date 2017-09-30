#include <bits/stdc++.h>
using namespace std;

class reindeer{
public:
    string name; long long int p, s;
    reindeer(){}
    reindeer(string str, int sen, int pro){
        name = str;
        s = sen;
        p = pro;
    }
    bool operator< (const reindeer& r) const{
        if (this->s == r.s) return p > r.p;
        return s > r.s;
    }
};

int main(){
    typedef pair<int, int> ii;
    set<reindeer> R;
    map<string, ii> M;
    long long int ans = 0;
    int N;  cin >> N;
    while(N--){
        char c; cin >> c;
        if (c == 'A'){
            string name; int pro, s;
            cin >> name >> s >> pro;
            auto p = R.insert(reindeer(name,s,pro));
            M[name] = make_pair(s,pro);
            auto cur = p.first;

            bool hasNext = true;
            bool hasPrev = true;
            if (cur == R.begin()) hasPrev = false;
            if (next(cur) == R.end()) hasNext = false;
            if(hasPrev && hasNext)  ans -= prev(cur)->p * next(cur)->p;
            if (hasNext)    ans += cur->p * next(cur)->p;
            if (hasPrev)    ans += cur->p * prev(cur)->p;
        }
        else if (c == 'R'){
            string name;    cin >> name;
            auto val = M[name];
            reindeer tmp(name, get<0>(val), get<1>(val));
            auto cur = R.find(tmp);
            bool hasNext = true;
            bool hasPrev = true;
            if (cur == R.begin()) hasPrev = false;
            if (next(cur) == R.end()) hasNext = false;
            if (hasNext)    ans -= cur->p * next(cur)->p;
            if (hasPrev)    ans -= cur->p * prev(cur)->p;
            if(hasPrev && hasNext)  ans += prev(cur)->p * next(cur)->p;
            R.erase(cur);
        }
        cout << ans;
        if (N) puts("");
    }
    return 0;
}
