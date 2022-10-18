#include <iostream>
#include<bits/stdc++.h>

using namespace std;
queue<char>q;
stack<char> st;

class Solution {
    //Write your code here
    public:
    void pushCharacter(char ch)
    {
        st.push(ch);
    }

    void enqueueCharacter(char ch)
    {
        q.push(ch);
    }
    char popCharacter()
    {
        char ch;
        ch= st.top();
        st.pop();
        return ch;
    }
    char dequeueCharacter()
    {
        char ch;
        ch= q.front();
        q.pop();
        return ch;
    }
};

