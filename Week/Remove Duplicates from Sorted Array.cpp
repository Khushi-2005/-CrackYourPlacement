class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
        int n = nums.size();
        int k = 1;
        //unique element lets say 1 
        for(int i =1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                //unique 
                nums[k] = nums[i];
                //inserting it at k place 
                k++;
                //check for each element
            }       } 
            return k;
            //unique elements
        
    }
};
