class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones =0;
        int twos = 0;
        int index = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==0){zeros++;}
            else if(nums[i]==1){ones++;}
            else {twos++;}
        }
        while(zeros--){nums[index++]=0;}
        while(ones--){nums[index++]=1;}
        while(twos--){nums[index++]=2;}
    }
};