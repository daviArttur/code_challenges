class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> algo;
        algo['I'] = 1;
        algo['V'] = 5;
        algo['X'] = 10;
        algo['L'] = 50;
        algo['C'] = 100;
        algo['D'] = 500;
        algo['M'] = 1000;

        int i = 0; int sum = 0;

        vector<int> v(s.size(), 0);

        while(i < s.size()) {
            v.push_back(algo[s[i]]);
            i++;
        }
        
        for (int i = 0; i < v.size(); i++) {
            if (i < v.size() - 1 && v[i + 1] > v[i]) {
                v[i + 1] -= v[i];
            } else {
                sum += v[i];
            }
        }

        return sum;
    }
};
