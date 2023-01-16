class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp; 
        int sum=0;
        for(int i:nums) 
        {
            mp[i]++;
        }
        for(auto x:mp)
        { 
        if(x.second==1) 
            sum+=x.first;
        }
        return sum;
    }
};
