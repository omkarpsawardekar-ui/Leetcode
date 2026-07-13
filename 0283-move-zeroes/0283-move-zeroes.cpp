class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        int index=0;
        for (int i=0;i<n;i++){
            if(nums[i]!=0){
                arr[index]=nums[i];
                index++;
            }
        }
        for(int i=index;i<n;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
    }
};