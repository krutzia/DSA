#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Method name matches your test harness: missingMultiple
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());
        int i = 1;
        while (true) {
            int mult = i * k;
            if (s.find(mult) == s.end()) return mult;
            ++i;
        }
    }
};

