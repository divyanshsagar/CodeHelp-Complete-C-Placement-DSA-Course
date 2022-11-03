class Solution {
    bool isequal(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int arr1[26]={0};
        for(int i=0;i<s1.size();i++){
            int number=s1[i]-'a';
            arr1[number]++;
        }
        int i=0;
        int arr2[26]={0};
        while(i<s1.size() && i<s2.size()){
            int number=s2[i]-'a';
            arr2[number]++;
            i++;
        }
        if(isequal(arr1,arr2)){
            return 1;
        }
        while(i<s2.size()){
            int newchar=s2[i]-'a';
            arr2[newchar]++;
            int oldchar=s2[i-s1.size()]-'a';
            arr2[oldchar]--;
            i++;
            if(isequal(arr1,arr2)){
                return 1;
            }
        }
        return 0;
    }
};
