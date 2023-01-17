int Solution::solve(vector<int> &A) {
   unordered_map<int,int>mp;
    for(int i=0;i<A.size();i++)
    {
        mp[A[i]]++;
    }
    for(auto a:A){
        if(mp[a]>1){
            return a;
        }
    }
    return -1;
}
