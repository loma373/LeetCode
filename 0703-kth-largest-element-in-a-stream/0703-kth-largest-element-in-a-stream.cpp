class KthLargest {
    vector<int> v;
    int k1;
public:
    KthLargest(int k, vector<int>& nums) {
        v=nums;
        sort(v.begin(),v.end());
        k1=k;
    }
    
    int add(int val) {
        v.insert(lower_bound(v.begin(),v.end(),val),val);
        return v[v.size()-k1];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */