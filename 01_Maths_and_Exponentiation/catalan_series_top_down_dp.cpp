#include <iostream>
using namespace std;

// Overlapping subproblems

int dp[100] = {0};

//Binary Search Trees 
int catalan(int n){
    
    if(n==0){
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans += catalan(i-1)*catalan(n-i);
    }
    //For the first time, you can store the catalan number
    dp[n] = ans;
    return ans;
}
// You can also use 2nCn/(n+1)


int main() {
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<catalan(i)<<",";
    }
    
    return 0;
}
