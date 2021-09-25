/*

Problem : Find First and Last Position of Element in Sorted Array;
 Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]


*/
class Solution {
public:
    
    int lastOcc(vector<int>nums, int target){
        int low=0;
        int high=nums.size()-1;
        int mid;
        
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                if(mid==nums.size()-1 or nums[mid+1]!=nums[mid]){
                    return mid;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return -1;
    }
    int firstOcc(vector<int>nums, int target){
        int low=0;
        int high=nums.size()-1;
        int mid;
        
        while(low<=high){
            mid=low+(high-low)/2;
            // cout<<mid<<endl;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                if(mid==0 or nums[mid-1]!=nums[mid]){
                    return mid;
                }
                else{
                    high=mid-1;
                }
            }
            
        }
        return -1;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int first=firstOcc(nums, target);
        int last =lastOcc(nums, target);
        return {first, last};
        
    }
};
