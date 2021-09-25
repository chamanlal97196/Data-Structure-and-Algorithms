/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1

*/

class Solution {
public:
    int rbinarySearch(vector<int>& nums,int low, int high, int target){
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                low =mid;
            }
            else{
                high=mid-1;
            }
            
        }
        return -1;
        
    }
    
    int binarySearch(vector<int>& nums, int low, int high, int target){
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
    //Using minimum element index we can do this :
    
    int minIndex(vector<int>& nums){
        int start=0;
        int end=nums.size();
        int mid;
        while(start<=end){
            if(nums[start]<=nums[end]){
                return start;
            }
            mid=start+(end-start)/2;
            if(nums[start]<=nums[mid]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        /*if(nums.size()==1) {
            if(nums[0]==target){
                return 0;
            }
        }
        int index=minIndex(nums);
        if(index!=-1){
            int first=rbinarySearch(nums,0, index-1, target);
            if(first!=-1){
                return first;
            }
            return binarySearch(nums, index, n-1, target);
        }
        return -1;
        */
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high){
            //Normal binary Search :
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            
            //left Half sort :
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target and nums[mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]<target and nums[high]>=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            
        }
        return -1;
        
    }
};
