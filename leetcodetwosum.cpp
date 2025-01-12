#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c,sum=0,i=0;
    cin>>t;
    while(t--)
    {
        i=0;
        sum=0;
        cin>>n>>a>>b>>c;
        while(sum<n)
        {
           if(sum<n)
           {
               sum+=a;
               i++;
               if(sum<n)
               {
                  sum+=b;
                    i++;
                    if(sum<n)
                   {
                      sum+=c;
                        i++;
                   }
               }

           }
        }
        cout<<i<<endl;

    }

}
