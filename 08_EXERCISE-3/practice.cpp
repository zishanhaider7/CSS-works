#include <bits/stdc++.h>

using namespace std;
vector<int> better(vector<int>&arr)
{
    int n= arr.size();
    map<int,int> lst;
    vector<int>ans;
    int req=(n/3)+1;

    for (int i = 0; i < n; i++)
    {
        lst[arr[i]]++;        
    }

    for(auto it:lst)
    {
        if(it.second >= req)
        {
            ans.push_back(it.first);
        }
    }
    
    return ans;
}


int main()
{
    


return 0;
}