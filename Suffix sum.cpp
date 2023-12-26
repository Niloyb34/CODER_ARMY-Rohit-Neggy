///SUFFIX SUM NIA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///Suffix sum nia
    int arr[]= {6,4,5,-3,2,8};
    int n=sizeof(arr)/sizeof(int);
    //Suffix sum
    vector<int>suffix(n);
    suffix[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        suffix[i]=suffix[i+1]+arr[i];
    }
    for(auto it:suffix)
    {
        cout<<it<<"  ";
    }
}
////// OUTPUT WILL BE ///////////
22  16  12  7  10  8
