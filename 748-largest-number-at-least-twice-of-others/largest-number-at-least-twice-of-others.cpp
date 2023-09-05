class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=INT_MIN,max2=INT_MIN+1,max_ind;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max2=max;
                max=nums[i];
                max_ind=i;
            }
            else if(max2<nums[i] and nums[i]!=max){
                max2=nums[i];
            }
        }
        if(max2*2<=max)return max_ind;
        return -1;
    }
};