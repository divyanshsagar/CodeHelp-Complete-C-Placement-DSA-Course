#include <bits/stdc++.h> 
vector<int> reverse(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int> ans;
    while(i>=0 && j>=0){
        int num1=a[i];
        int num2=b[j];
        int sum=num1+num2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int num1=a[i];
        int sum=num1+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int num2=b[j];
        int sum=num2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
        while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        }
    return reverse(ans);
}
