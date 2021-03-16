#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    stack<int> s1,s2;
    int maxx = -1;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int y;
            cin>>y;
            s1.push(y);
            if(y >= maxx){
                s2.push(y);
            }
            maxx = max(maxx,y);
            //cout<<maxx<<"\n";
        }
        else if(x == 2){

            if(s2.top() == s1.top()){
                s2.pop();
            }
            s1.pop();
            if(!s2.empty()){
                maxx = s2.top();
            }
            else{
                maxx=-1;
            }
        }
        else {
            cout<<s2.top()<<"\n";
        }
    }
    return 0;
}
