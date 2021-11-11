// whenever we see a non-zero ele. we increment the count
// and swap the non-zero ele. with the index countand incr. count

void moveToEnd(int arr[], int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		}
	}
}


/* Using Vectors
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        int ans=0;
        
        for(int i=0; i<n; i++) {
            if(nums[i]!=0) {
                swap(nums[i], nums[ans]);
                ans++;
            }
        }
    }
};*/
