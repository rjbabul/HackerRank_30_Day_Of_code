#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string , int > mp;
    int n ;
    string str,num;
    vector<string> vt[200005];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>str>>num;
        if(mp[str]==0)mp[str]=i;

        vt[mp[str]].push_back(num);
    }
  while(cin>>str)
    {

        if(mp[str]==0) cout<<"Not found"<<endl;
        else
            for(int i=0;i<vt[mp[str]].size();i++)
              cout<<str<<"="<<vt[mp[str]][i]<<endl;
    }
    return 0;
}
