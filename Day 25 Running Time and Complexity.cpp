#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int ll;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    ll n;
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    bool flag=true;
    if(n==1)
    flag=false;
    for(ll i=2; i*i<=n && flag;i++)
    {
        if(n%i==0)flag=false;
    }
    if(flag) cout<<"Prime"<<endl;
    else cout<<"Not prime"<<endl;
    }
    return 0;
}
