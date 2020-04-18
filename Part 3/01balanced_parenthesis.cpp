#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str){
    stack<char> st;

    for(int i=0; i<str.length(); i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            st.push(str[i]);
        }else if(str[i] == ')' || str[i] == ']' || str[i] == '}'){
            if(st.empty()){
                return false;
            }

            if(st.top() == '(' && str[i] == ')'){
                st.pop();
            }else if(st.top() == '[' && str[i] == ']'){
                st.pop();
            }else if(st.top() == '{' && str[i] == '}'){
                st.pop();
            }else
            {
                return false;
            }
            
        }
    }

    if(st.empty()){
        return true;
    }else{
        return false;
    }
}



int main(){

    string str;
    cin>>str;

    bool ans = isBalanced(str);
    if(ans == true){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}