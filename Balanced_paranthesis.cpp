#include <iostream>
#include <stack>
#include <string.h>
#include <bits/stdc++.h> 
using namespace std; 

bool isbalanced_or_not(string expr)
{
    stack<char> st;
    char c;
    int i,l;
    l=expr.length();
    for(i=0;i<l;i++)
    {
        if(expr[i]=='{' || expr[i]=='[' || expr[i]=='(')
        {
            st.push(expr[i]);
            continue;
        }
        if(st.empty())
        {
            return false;
        }
        switch (expr[i]) 
        {
            case ')':    
               c = st.top();
               st.pop();
               if (c=='{' || c=='[')
                  return false;
                  break;
            case '}': 
               c = st.top();
               st.pop();
               if (c=='(' || c=='[')
                  return false;
                  break;
            case ']': 
               c = st.top();
               st.pop();
               if (c =='(' || c == '{')
                  return false;
                  break;
        }
    }
}

int main()
{
    string exps;
    cin>>exps;
    if(isbalanced_or_not)
    {
        cout<<"Brackets are balanced";
    }
    else
    {
        cout<<"Brackets are not balanced";
    }
    return 0;
}
