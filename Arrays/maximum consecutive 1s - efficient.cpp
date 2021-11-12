//we traverse the array, 
//whenever we see 0, we reset the curr to 0
//when we see 1, we increment crr n compare with 
//result 

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        	int res=0;
            int curr=0;  
        int n=nums.size();
	for(int i=0;i<n;i++)
	{      
			if(nums[i]==0)
			curr=0;
			else
			{
			curr++;
			res=max(res,curr);
		    }
	
	}
	return res;
    }
};
