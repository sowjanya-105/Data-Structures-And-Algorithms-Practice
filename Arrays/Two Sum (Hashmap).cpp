/*HASHMAP
Time Complexity: O(n)
Space Complexity: O(n) */

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) 
	{
		vector<int> v;
		int n=a.size();
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			if(m.count(k-a[i]))
			{
				v.push_back(m[k-a[i]]);
				v.push_back(i);
				return v;
			}
			else
				m[a[i]]=i;
		}
        return v;        
    }
};
