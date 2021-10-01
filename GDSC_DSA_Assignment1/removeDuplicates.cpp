class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int m=0;
        for(int i=1;i<nums.size();i++){
            if(nums[m]!=nums[i] ){
                m++;
                nums[m]=nums[i];
                
            }
        }
        if(nums.size())
            return m+1;
        else
            return 0;
    }
};