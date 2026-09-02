class Solution {
public:
    bool uniformArray(vector<int>& a) {
        int e = 0, o = 0;
        for (int x : a) (x % 2 ? o : e)++;

        for (int t = 0; t < 2; t++) {
            bool ok = 1;
            for (int x : a) {
                int p = x%2;
                if (p == t) continue;
                if ((p ^ t) ? (!o || (p && o == 1)) : (!e || (!p && e == 1)))
                    ok = 0;
            }
            if (ok) return 1;
        }
        return 0;
    }
};