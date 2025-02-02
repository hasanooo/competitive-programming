#include <iostream>

using namespace std;
  int search(vector<int>& nums, int target) {
     // int n=-1;
    //  for(int i=0;i<nums.size();i++)
     // {
       // if(nums[i]==target)
        //{
          //   n=i;
            // break;
       // }
     // }
      // return n;
      int left=0;
      int right=nums.size()-1;

      while(left<=right)
      {
          int mid=left+(right-left)/2;
          if(nums[mid]==target)
          {
              return mid;
          }
          else if(nums[mid]>target)
          {

               right=mid-1;
          }
          else{
           left=mid+1;
          }
      }
      return -1;
    }

     vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr(2, -1); // Initialize result to [-1, -1].

    // Find the leftmost index
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            arr[0] = mid; // Update the leftmost index
            right = mid - 1; // Continue searching in the left half
        } else if (nums[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    // Find the rightmost index
    left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            arr[1] = mid; // Update the rightmost index
            left = mid + 1; // Continue searching in the right half
        } else if (nums[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return arr;
    }
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
