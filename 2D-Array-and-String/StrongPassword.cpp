#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    //It consists of exactly 10 characters.
    bool char10=false;
    // It contains at least one lowercase English letter.
    bool lower=false;
    // It contains at least one uppercase English letter.
    bool upper=false;
    // It contains at least one digit.
    bool digit=false;
    // It contains at least one special character.
    bool special=false;

    if (s.length()>=10)
    {
        char10=true;
    }
    
    for(char &c:s){
        if ((int)c>=48 and (int)c<=57)
        {
            digit=true;
        }
        else if((int)c>=65 and (int)c<=90)
        {
            upper=true;
        }    
        else if((int)c>=97 and (int)c<=122)
        {
            lower=true;
        }else
        {
            special=true;
        }
    }

    if (char10 == true and lower == true and upper == true and special == true and digit == true)
    {
        cout<<"Strong";
    }
    else
    {
        cout<<"Weak";
    }

}