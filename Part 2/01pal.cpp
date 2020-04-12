#include<iostream>
using namespace std;


bool isPal(int start, int end, string str){

    if(start == end){
        return true;
    }

    if(str[start] != str[end]){
        return false;
    }else{
        bool ans = isPal(start+1, end-1, str);
        return ans;
    }

}


int main(){
    string str;
    cin>>str;

    bool ans = isPal(0, str.length()-1, str);
    if(ans == true){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}