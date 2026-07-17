// Last updated: 17/07/2026, 22:12:25
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
  //digit=digit+1 if.... digit[i]<9
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};