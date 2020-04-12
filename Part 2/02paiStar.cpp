#include<iostream>
using namespace std;

string pairStar(int idx, string str){
    if(idx == str.length()){
        return str;
    }

    if(str[idx] == str[idx+1]){
        return pairStar(idx+2, str.substr(0, idx+1) + "*" + str.substr(idx+1));
    }else{
        return pairStar(idx+1, str);
    }
}

int main(){
    string str;
    cin>>str;

    string ans = pairStar(0, str);
    cout<<ans<<endl;
    return 0;
}