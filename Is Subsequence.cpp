
//  2pointer method
#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    int n1=str1.size();
    int n2=str2.size();
    if(n2>n1){
        swap(str1,str2);
        swap(n1,n2);
    }
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(str1[i]==str2[j]){
            i++;
            j++;
            
        }
        else{
            i++;
        }
        
    }
    if(j==n2){
        return true;
    }

    return false;
}
// Queue method

#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    std::queue<char> q;
    for (char c : str1) {
        q.push(c);
    }

    for (char c : str2) {
        if (q.empty()) {
            break;
        }
        if (c == q.front()) {
            q.pop();
        }
    }

    return q.empty();
}