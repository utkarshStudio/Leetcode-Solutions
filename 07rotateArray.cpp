class Solution {
public:
    void reversePart(int i, int j, vector<int>& v) {
        while (i < j) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

    void rotate(vector<int>& v, int k) {
        int n = v.size();

        k %= n;

        reversePart(0, n - k - 1, v);
        reversePart(n - k, n - 1, v);
        reversePart(0, n - 1, v);
    }
};