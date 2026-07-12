class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int j=0;
        int n= nums.size();
        int temp[n];
        k=k%n;
        for(int i=n-k; i<n; i++){
            temp[j]= nums[i];
            j++;
        }
        for(int i=0;i<n-k;i++){
            temp[j]= nums[i];
            j++;
        }
        for(int l=0; l<n; l++){
            nums[l]=temp[l];
        }
    }
};