#include<bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>&arr,int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    mergearr(arr,low,mid,high);
}
void mergearr(vector<int>&arr,int low,int mid,int high)
{
    vector<int>mergesorted;
  int  left=low;
  int  right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            mergesorted.push_back(arr[left]);
            left++;
        }
        else{
             mergesorted.push_back(arr[right]);
             right++;
        }
    }
    while(left<=mid)
    {
         mergesorted.push_back(arr[left]);
            left++;
    }
    while(right<=high)
    {
        mergesorted.push_back(arr[right]);
             right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=mergesorted[i-low];
    }
}
int main()
{
vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}

