#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int kotak(int n, int m){
    
    if(n==1){
        return n;
    }
    if(m==1){
        return m;
    }
    else{
        return kotak(n,m-1)+ kotak(n-1,m);
    }
    
}
int main() {
    int n,m;
    cin>>n>>m;
    cout<<kotak(n,m);
    return 0;
}
