//1.traverse through loop and calculate the minimum element
//2.Parallelly calculate the maximum profit by substracting from the current element
//with the minimum element till that point;

int maxProfit(vector<int>& arr) {

        int index=0,maxPro=0,mn=INT_MAX;
        
        for(int i=0;i<arr.size();i++)
        { 
            mn=min(mn,arr[i]);
            maxPro=max(maxPro,arr[i]-mn);
         
        }
        return maxPro;
    }
    
