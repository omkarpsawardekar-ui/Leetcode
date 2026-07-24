class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int lastsmaller = INT_MIN;
        int longest = 1;
        int cnt = 0;
        if(n==0) return 0;
        for (int i = 0 ; i<n ; i++){
            if(nums[i]-1 == lastsmaller){
                cnt++;
                lastsmaller = nums[i];
            }
            else if(lastsmaller != nums[i]){
                cnt = 1;
                lastsmaller = nums[i];
            }
            longest = max(longest , cnt);
        }
        return longest;
    }
};