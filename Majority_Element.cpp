class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int m = INT_MIN;
        int p;
        for(auto i:mp){
            if(i.second>m){
                m = i.second;
                p = i.first;
            }
        }
        
        return p;
    }
};
