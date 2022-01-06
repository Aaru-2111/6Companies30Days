
//Problem name: Find the largest 10 numbers in a list having 10 million entries
// solution : Min heap of size 10 can be used, insert every number in the min heap whenever size exceeds 10 , pop it from the heap, at the end heap will only
//contain maximum 10 elements out of all the elements in the list
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int x,n;
    cin>>n;
    for(int i=0;i<n;i++)
      {  cin>>x;
          pq.push(x);
        if(pq.size()>10)
        pq.pop();
      }

    vector<int> ans;
    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";


}
