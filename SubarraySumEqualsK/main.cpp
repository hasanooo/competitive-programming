#include <bits/stdc++.h>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int h=0,sum=0;
    for(int i=0;i<nums.size()-1;i++)
    {
        h=0;
        sum=0;
        for(int j=i+1;j<nums.size();j++)
        {
            sum+=nums[i]+nums[j];
            h++;
            if(sum==k)
            {
                return h;
            }
        }
    }
    return h;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
