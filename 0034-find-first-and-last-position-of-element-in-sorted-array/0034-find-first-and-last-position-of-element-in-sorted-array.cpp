class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int first=-1 , last =-1;
        for(int i=n-1 ; i>=0; i--){
            if(nums[i]==target){
                if(first == -1){first =i;}
                last=i;
            }
        }
        return {last, first};
    }
};