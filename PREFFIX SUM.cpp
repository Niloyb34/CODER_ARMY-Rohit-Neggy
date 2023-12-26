#include<bits/stdc++.h>
using namespace std;
int main()
{
       int arr[]={6,4,5,-3,2,8};
       int n=sizeof(arr)/sizeof(arr[0]);
       int i;
       vector<int>prefix(n);
       prefix[0]=arr[0];
       for(i=1;i<n;i++)
       {
              prefix[i]=prefix[i-1]+arr[i];
       }
       for(auto it:prefix)
       {
              cout<<it<<"  ";
       }
}
////////////output will be////////////////
6  10  15  12  14  22
