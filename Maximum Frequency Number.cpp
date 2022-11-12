int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int,int> count;
    int ans=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
        maxi=max(maxi,count[arr[i]]);
    }
    for(int i=0;i<arr.size();i++){
        if(maxi==count[arr[i]]){
            ans=arr[i];
            break;
        }
    }
    return ans;
}
