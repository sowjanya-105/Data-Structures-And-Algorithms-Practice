//Using Hash Table
//Count the number of appearances for 
//each distinct number in nums, 
//once we see a number appear more than n / 2 times,
//it is the majority element.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int num : nums) {
            if (++counter[num] > nums.size() / 2) {
                return num;
            }
        }
        return 0;
    }
};

