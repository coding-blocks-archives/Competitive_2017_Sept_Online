//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
#include "../helper.h"
using namespace std;

const int inf = (int)1e6;

bool comparator(const int x){
    return x < 33;
}



class Student{
public:
    int marks;
    int rollNo; 
    friend ostream& operator<<(ostream& in, const Student& S){
        in << S.marks << " " << S.rollNo << endl;
        return in;
    }
};


bool comparator1(Student s){
    return s.marks < 33;
}
int main(){
    vector<Student> arr(5);
    for(int i = 0; i < 5; ++i){
        cin >> arr[i].marks >> arr[i].rollNo;
    }

    remove_if(arr.begin(), arr.end(), comparator1);
    printContainer(arr.begin(), arr.end());


}