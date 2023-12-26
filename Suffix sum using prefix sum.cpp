
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int arr[6];
       int i;
       int n=sizeof(arr)/sizeof(int);
       cout<<"Enter the array : ";
       for(i=0;i<n;i++)
       {
              cin>>arr[i];
       }
       cout<<"The taken array is : ";
       for(auto it:arr)
       {
              cout<<it<<" ";
       }
      cout<<endl;
       reverse(arr,arr+n);
       cout<<"After Reversing the array will be : ";
       for(auto it:arr)
       {
              cout<<it<<" ";
       }
       cout<<endl;
       ///using prefix sum method we will find the suffix sum
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
///////////////OUTPUT WILL BE /////////////////////
Enter the array : 6 4 5 -3 2 8
The taken array is : 6 4 5 -3 2 8
After Reversing the array will be : 8 2 -3 5 4 6
8  10  7  12  16  22
