class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        int n = nums.size();
        int low =0,mid =0,high = n-1; 
        while(mid<=high){
            if(nums[mid]!=0){
                swap(nums[mid],nums[low]);
                low++;
             
            } 
            mid++;
            
        }
    }
};
