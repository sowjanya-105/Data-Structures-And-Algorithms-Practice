//Traverse the array by maintaining two variables min_so_far and max_so_far. Now while traversing if the present element at ith index is negative we swap the min_so_far and max_so_far so that by multiplying negative number with minimum value gives a maximum value.
//The max_so_far depends on the maximum of current element and the product of current element with previous max_so_far.
//The min_so_far depends on the minimum of current element and the product of current element with previous min_so_far.
//Another variable max_product is maintained to find maximum product of sub arrays upto that iteration and max_product is finally returned after all iterations.
//This approach is of time complexity O(n) and space complexity of O(1).

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_so_far = nums[0];
        int min_so_far = nums[0];
        int max_product = nums[0];
        int n = nums.size();
        
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(max_so_far, min_so_far);
            }
            max_so_far = max(nums[i], nums[i]*max_so_far);
            min_so_far = min(nums[i], nums[i]*min_so_far);
            // At each iteration max_product is calculated as the maximum of previous maxproduct and max_so_far at that iteration.
            max_product = max(max_product, max_so_far);
        }
        return max_product;
    }
};
