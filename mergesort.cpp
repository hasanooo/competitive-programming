#include<bits/stdc++.h>
using namespace std;

void mergesort(vector<int>&arr,int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    mergearr(arr,low,mid,high);
}
vector<int>mergearr(vector<int>&arr,int low,int mid,int high)
{
    vector<int>mergesort;
    left=low;
    right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            mergesort.push_back(arr[left]);
            left++;
        }
        else{
             mergesort.push_back(arr[right]);
             right++;
        }
    }
    while(left<=mid)
    {
         mergesort.push_back(arr[left]);
            left++;
    }
    while(right<=high)
    {
        mergesort.push_back(arr[right]);
             right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=mergesort[i-low];
    }
}
int main()
{

}
