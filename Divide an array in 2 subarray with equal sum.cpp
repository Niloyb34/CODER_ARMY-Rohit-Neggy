///Divide an array in 2 subarray with equal sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int i,j,n;
       cout<<"Enter the array size : "; 
       cin>>n;
       int arr[n],sum1,sum2;
       for(i=0;i<n;i++)     // O(N)
       {
              cin>>arr[i];   
       }
       for(int i=0;i<n-1;i++)  //O(N*(N+N))=O(N*2N)=O(N*N)=O(N2)
       {
              sum1=0,sum2=0;
              for(j=0;j<=i;j++)  //O(N)
              {
                  sum1+=arr[j];
              }
              for(j=i+1;j<n;j++)   //O(N)
              {
               sum2+=arr[j];
              }
              if(sum1==sum2)
              {

                     cout<<"YES-->"<<arr[i]<<" INDEX is "<<i<<"  Tar mane amaderke "<<arr[i]<<" er porer element teke arekti array start korte hbe"<<endl;
                     cout<<arr[i]<<"er age prjnto array total sum = er porer element teke last prjnto element er sum equal hbe"<<endl;
              }
              else
              {

                     cout<<"NO-->"<<arr[i]<<" INDEX is "<<i<<endl;

              }
       }
}
/* OVERALL TIME COMPLEXITY HBE O(N2)
///INPUT Array will be
/*
    Array size-8
    3 4 -2 5 8 20 -10 8

Enter the array size : 8

3 4 -2 5 8 20 -10 8
NO-->3 INDEX is 0
NO-->4 INDEX is 1
NO-->-2 INDEX is 2
NO-->5 INDEX is 3
YES-->8 INDEX is 4  Tar mane amaderke 8 er porer element teke arekti array start korte hbe
8er age prjnto array total sum = er porer element teke last prjnto element er sum equal hbe
NO-->20 INDEX is 5
NO-->-10 INDEX is 6
*/
