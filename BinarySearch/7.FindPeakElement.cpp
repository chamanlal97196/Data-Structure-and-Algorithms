/*
A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
 

Constraints:

1 <= nums.length <= 1000
-231 <= nums[i] <= 231 - 1
nums[i] != nums[i + 1] for all valid i.
*/

class Solution {
public:
    int findPeakElement(vector<int>& num) {
        /*int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        if(n==2){
            if(nums[0]>nums[1]) return 0;
            else return 1;
        }
        
        while(low<=high){
            mid=low+(high-low)/2;
            
            if(mid==0 || nums[mid-1]<=nums[mid] && mid==n-1 || nums[mid+1]<=nums[mid]){
                return mid;
            }
            if(mid>0 && nums[mid-1]>=nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
                
            }
        }
        return -1;
        */
        int low = 0;
        int high = num.size()-1;
        
        while(low < high)
        {
            int mid1 = (low+high)/2;
            int mid2 = mid1+1;
            if(num[mid1] < num[mid2])
                low = mid2;
            else
                high = mid1;
        }
        return low;
    }
};
