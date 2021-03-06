class Solution {
public:
    int majorityElement(vector<int>& A) {
        // Boyer-Moore Voting Algorithm
        int ans = A[0], count = 1;
        for(int i = 1; i < A.size(); i++)
        {
            if(A[i] == ans) count++;
            else
            {
                count--;
                if(count == 0)
                {
                    ans = A[i];
                    count = 1;
                }
            }
        }
        return ans;
    }
};
