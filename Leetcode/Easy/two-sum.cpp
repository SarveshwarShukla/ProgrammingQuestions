// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size1 = nums.size();
        for(int i = 0; i<size1-1; i++){
            for(int j = i+1; j<size1; j++){
                if(nums[i] + nums[j]==target){
                    return {i, j};
                }
            }
        }   
       return {};
    }
};

// Initially I wanted to use sizeof() operator but it was creating some error