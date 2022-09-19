#include<bits/stdc++.h>


using namespace std;

void util(stack<int>&s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int val=s.top();
    s.pop();
    util(s,x);
    s.push(val);

}
void solve(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int x=s.top();
    s.pop();
    solve(s);
    util(s,x);
}
int main()
{
    stack<int>s;
    for(int i=1;i<=4;i++)
    s.push(i);
    solve(s);

    while(s.size())
    {
        cout<<s.top()<<"\n";
        s.pop();
    }




}