class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0, one = 0, two = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) zero++;
            else if (nums[i] == 1) one++;
            else two++;
        }

        for (int i = 0; i < n; i++) {
            if (i < zero) nums[i] = 0;
            else if (i < zero + one) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};


//Dutch National Flag Algorithm-----{method 2}----->>


// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0;
//         int mid = 0;
//         int hi = nums.size()-1;
// // 1) mid ke baare me socho
// // 2) 0 to lo-1 => 0
// //    hi+1 to end => 2
//         while(mid<=hi){
//             if(nums[mid]==2){
//                 int temp = nums[mid];
//                 nums[mid] = nums[hi];
//                 nums[hi] = temp;
//                 hi--;
//             }
//             else if(nums[mid]==0){
//                 int temp = nums[mid];
//                 nums[mid] = nums[low];
//                 nums[low] = temp;
//                 low++;
//                 mid++;
//             }
//             else mid++;
//         }
//     }
// };