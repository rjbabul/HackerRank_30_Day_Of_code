#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    cin>>s;

   try { stoi(s);
     cout<<s<<endl;
   } catch (... ) {
       cout<<"Bad String"<<endl;
   }

    return 0;
}
