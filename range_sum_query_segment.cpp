class NumArray {
public:
    vector<int> seg; 
    int n; 
    
    void buildtree(vector<int>& nums, int index, int s, int e){
        if(s == e){
            seg[index] = nums[s]; 
            return;
        }
        int mid = s+(e-s)/2;
        buildtree(nums, 2*index+1, s, mid);
        buildtree(nums, 2*index+2, mid+1, e);
        seg[index]=seg[2*index+1]+ seg[2*index+2];
    }

    void updatetree(int indi, int index, int s, int e, int val) {
        if(index<s || index>e) return;
        if(s==e){
            if(s==index) seg[indi]=val;
            return;
        }
        int mid=s+(e-s)/2;
        if(index<=mid) updatetree(2*indi+1,index,s,mid,val); 
        else updatetree(2*indi+2,index,mid+1,e,val); 
        seg[indi]=seg[2*indi+1]+seg[2*indi+2];
    }

    int query(int index, int s, int e, int left, int right){
        if (e<left || s>right) return 0;
        if (s>=left && e<=right) return seg[index];
        int mid = s+(e-s)/2;
        int lefti = query(2*index+1, s, mid, left, right);
        int righti = query(2*index+2, mid+1, e, left, right);
        return lefti + righti;
    }
    
    NumArray(vector<int>& nums) {
        n = nums.size();
        seg.resize(4*n, 0); 
        buildtree(nums, 0, 0, n-1); 
    }
    
    void update(int index, int val) {
   
        updatetree(0, index, 0, n-1, val);
    }
    
    int sumRange(int left, int right) {
      
        return query(0,  0, n-1, left, right); 
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */