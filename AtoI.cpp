#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    int temp = 0;
    int n = str.length();
    for (int i=0;i<n;i++){
        if(str[i]-'0'>=0 && str[i]-'0'<=9){
            temp = temp*10 + (str[i]-'0');
        }
    }
    if (str[0]=='-'){
        return -1*temp;
    }
    return temp;

}
