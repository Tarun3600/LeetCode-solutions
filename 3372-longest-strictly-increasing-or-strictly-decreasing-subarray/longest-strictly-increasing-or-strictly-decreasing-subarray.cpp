class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty()) return 0; 
        
        int maxLen = 1; 
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {  
            int count = 1;  

            
            if (nums[i] < nums[i + 1]) {  
                for (int j = i; j < n - 1; j++) {  
                    if (nums[j] < nums[j + 1]) count++;  
                    else break;  
                }  
            }  
            else if (nums[i] > nums[i + 1]) {  
                for (int j = i; j < n - 1; j++) {  
                    if (nums[j] > nums[j + 1]) count++;  
                    else break;  
                }  
            }  

            if (count > maxLen) maxLen = count;  
        }  
        return maxLen;  
    }
};
