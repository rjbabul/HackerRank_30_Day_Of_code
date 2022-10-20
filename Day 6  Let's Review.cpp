#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string str;
    while(n-- && cin>>str)
    {
        string oddstring , evenstring ;
        for(int i=0;i<str.length(); i=i+2){
            oddstring+= str[i];
        }
        for(int i=1;i<str.length(); i=i+2){
            evenstring+= str[i];
        }

        cout<<oddstring<<" "<<evenstring<<endl;
    }
    return 0;
}
