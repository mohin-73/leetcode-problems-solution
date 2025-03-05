class Solution {
    public:
        long long coloredCells(int n) {
            long long k = n - 1;
            k = (k * k * 2) + (2 * n - 1);
            return k;
        }
};