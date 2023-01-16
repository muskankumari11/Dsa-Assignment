int Solution::solve(vector<int> &A) {
   // int solve(int* A, int n1) {
    unordered_map<int,int>map;
    for(int a:A)
    {
         map[a]++;    
    }
    for(int a:A)
    {
        if(map[a]>1)
        {
            return a;
        }
    }
   return -1;
}
