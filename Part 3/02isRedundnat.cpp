#include<iostream>
#include<stack>
using namespace std;

bool isRedundant(string str){
    stack<char> st;
    for(int i=0; i<str.length(); i++){
        if(str[i] != ')'){
            st.push(str[i]);
        }else{
            if(st.top() == '('){
                return true;
            }else{
                while(st.top() != '('){
                    st.pop();
                }
                st.pop();
            }
        }
    }
    return false;
}


int main(){
    string str;
    cin>>str;

    bool ans = isRedundant(str);

    if(ans == true){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}