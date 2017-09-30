//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
#include "../helper.h"
using namespace std;

const int inf = (int)1e6;

class Fruit{
public:
    int wt;
    char name_initial;

    bool operator< (const Fruit& F) const{
        return wt < F.wt;
    }

    friend istream& operator>> (istream& in, Fruit& F){
        in >> F.wt >> F.name_initial;
        return in;
    }
    friend ostream& operator<< (ostream& out, Fruit& F){
        out << F.wt << " " << F.name_initial << endl;
        return out;
    }
};

int main(){
    list<Fruit> lf(5);
    inputContainer(lf.begin(), lf.end());
    
    printContainer(lf.begin(), lf.end(), "");
    
    Fruit F;
    F.wt = 2;
    F.name_initial = 'C';

    list<Fruit>::iterator it =  lower_bound(lf.begin(), lf.end(), F);
    //returns an ITERATOR to the list of fruits

    cout << *it;


}