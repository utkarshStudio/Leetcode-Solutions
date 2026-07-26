class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        //Prev. Greatest
        int prev[n];
        prev[0] = -1;
        int max = height[0];
        for(int i = 1 ;i < n; i++){
            prev[i] = max;
            if(max < height[i]){
                max = height[i];
            }
        }
        //Next Greatest -- > use prev
        prev[n-1] = -1;
        max = height[n-1];
        for(int i = n-2 ;i > 0; i--){
            if(max<prev[i]) prev[i] = max;
            if(max < height[i]){
                max = height[i];
            }
        }

        // //Next Greatest

        // int next[n];
        // next[n-1] = -1;
        // max = height[n-1];
        // for(int i = n-2 ;i > 0; i--){
        //     next[i] = max;
        //     if(max < height[i]){
        //         max = height[i];
        //     }
        // }

        // //minimum Array

        // int mini[n];
        // for(int i = 0 ; i < n ; i++){
        //     mini[i] = min(prev[i],next[i]);
        // }

        // // calculating water
        
        // int water = 0;
        // for(int i = 1 ; i < n-1 ; i++){
        //     if(height[i]<min(prev[i],next[i])){
        //         water += (min(prev[i],next[i])-height[i]);
        //     }
        // }

        // calculating water

        int water = 0;
        for(int i = 1 ; i < n-1 ; i++){
            if(height[i]<prev[i]){
                water += (prev[i]-height[i]);
            }
        }
        return water;
    }
};