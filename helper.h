//Guards
# ifndef HELPER_H_
# define HELPER_H_

#include <bits/stdc++.h>
using namespace std;

//prints a container
template <class iter_type>  //iter_type must be atleast INPUT iterator
void printContainer(iter_type be, iter_type en, string seperator){
    while(be != en){
        cout << *be << seperator;
        ++be;
    }
    cout << endl;
}

//input a container
template <class iter_type>
void inputContainer(iter_type be, iter_type en){
    while(be != en){
        cin >> *be;
        ++be;
    }
}

#endif