#include <bits/stdc++.h> 
string validstring(string s){
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
            str.push_back(s[i]);
        }
    }
    return str;
}
string lowercase(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
        }
    }
    return s;
}
bool checkPalindrome(string s)
{
    string temp1=validstring(s);
    string ans=lowercase(temp1);
    int start=0;
    int end=ans.size()-1;
    while(start<=end){
        if(ans[start]!=ans[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
