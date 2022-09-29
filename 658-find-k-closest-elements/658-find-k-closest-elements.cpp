class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        sort(arr.begin(), arr.end(), [&x](int& a, int& b){
            int s = abs(x - a), t = abs(x - b);
            return s == t ? a < b : s < t;
        });
        vector<int> answer(arr.begin(), arr.begin()+k);
        sort(answer.begin(), answer.end());
        return answer;
    }
};