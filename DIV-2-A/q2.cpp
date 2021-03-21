#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin>>n;
    stack<int> s1,s2;
    int maxi = -1;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int y;
            cin>>y;
            s1.push(y);
            if(y >= maxi){
                s2.push(y);
            }
            maxi = max(maxi,y);
        }
        else if(x == 2){

            if(s2.top() == s1.top()){
                s2.pop();
            }
            s1.pop();
            if(!s2.empty()){
                maxi = s2.top();
            }
            else{
                maxi=-1;
            }
        }
        else {
            if(!s2.empty()){
                cout<<s2.top()<<"\n";    
            }else{
                cout<<"Empty!\n";
            }
            
        }
    }
    return 0;
}
