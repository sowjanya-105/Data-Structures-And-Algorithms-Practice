//we traverse through every element.
//for every ele.we count how many consecutive
//1's are there beginning with this ele.
//If the curr count is > result, we update the result

int max1(bool arr[], int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		int curr=0;
		for(int j=i;j<n;j++)
		{
			if(arr[j]==1)
			curr++;
			else
			break;
		}
		res=max(res,curr);
	}
	return res;
}
