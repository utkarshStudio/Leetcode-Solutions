class Solution {
public:
    void reverse(vector<int> &nums,int i,int j){
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();
        int i = 0;
        int j = n-1;

        for(int i = n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
        }
        if(pivot == -1){
            reverse(nums,0,n-1);
            return;
        }
        else{
            reverse(nums,pivot+1,n-1);
            //finding the just greater element than idx.
            int j = -1;
            for(int i = pivot+1;i<n;i++){
                if(nums[i]>nums[pivot]){
                    j = i;
                    break;
                }
            }
            swap(nums[pivot],nums[j]);
        }
    }
};