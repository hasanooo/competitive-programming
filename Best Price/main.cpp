#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int>a[n];
        vector<int>b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int mid=0,r=b.end()-1,l=a.begin(),amt=0,count=0,m=0,maxam=0;
        if(k!=0)
        {
             for(int i=0;i<n;i++)
           {
                mid=l+r/2;
                if(k<count)
                {
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
                if(mid<a[i])
                {
                    count=count+1;
                }
                 if(mid<=b[i])
                {
                    count=count+1;
                    m=m+1;
                }
                if(k<=count)
                {
                    amt=(count*mid);
                    maxam=max(maxam,amt);
                }

          }
        }
        else{
              // only a array will have binary search
        }

        return maxam;
    }
}
