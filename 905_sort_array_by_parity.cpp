class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0, j = A.size() - 1;
        while (i < j) {
            if (A[i] & 1 && !(A[j] & 1)) {
                A[i] ^= A[j];
                A[j] ^= A[i];
                A[i] ^= A[j];
            }
            if (!(A[i] & 1)) i++;
            if (A[j] & 1) j--;
        }
        return A;
    }
};
