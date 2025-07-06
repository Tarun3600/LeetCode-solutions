class FindSumPairs {
public:
    vector<int> n1;
    vector<int> n2;
    unordered_map<int,int> mpp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        n1 = nums1;
        n2 = nums2;
        for(int x : nums2)
        {
            mpp[x]++;
        }
    }
    
    void add(int index, int val) {
        int oldval = n2[index];
        mpp[oldval]--;
        if(mpp[oldval] == 0) mpp.erase(oldval);
        n2[index] += val;
        mpp[n2[index]]++;
    }
    
    int count(int tot) {
        int count = 0;
        for(int x : n1)
        {
            int needed = tot - x;
            if(mpp.count(needed) != 0)
            {
                count += mpp[needed];
            }
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */