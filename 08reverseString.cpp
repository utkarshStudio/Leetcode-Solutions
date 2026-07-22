class Solution {
public:
    void reverseString(vector<char>& v) {
        int i = 0;
        int j = v.size() - 1;

        while (i < j) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
};