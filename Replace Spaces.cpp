#include <bits/stdc++.h> 
string replaceSpaces(string &str){
    string str1="";
	for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            str1.push_back('@');
            str1.push_back('4');
            str1.push_back('0');
        }
        else{
            str1.push_back(str[i]);
        }
    }
    return str1;
}
