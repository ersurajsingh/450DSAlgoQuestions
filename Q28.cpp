class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        for (int i = 0; i < n - 2; i++)
    {
        unordered_set<int> s;
        int curr_sum=X-A[i];
        for (int j =i+1 ; j<n ; j++)
        {
            if (s.find(curr_sum - A[j]) != s.end())
            {
                return true;
            }
            s.insert(A[j]);
        }
    }
 
    // If we reach here, then no triplet was found
    return false;
    }

};