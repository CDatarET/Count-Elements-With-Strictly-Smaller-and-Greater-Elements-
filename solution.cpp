class Solution {
public:
    int countElements(vector<int>& nums) {
        int min = nums[0];
        int max = min;
        for(int i = 1; i < nums.size(); i++){
            min = std::min(min, nums[i]);
            max = std::max(max, nums[i]);
        }
        
        int ret = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > min && nums[i] < max){
                ret++;
            }
        }

        return ret;
    }
};
