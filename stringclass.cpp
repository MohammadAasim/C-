#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s0;
    string s1("Hello");

    string s2="Hello world!";
    string s3(s2);

    string s4=s3;

    char a[]={'a','b','c','d','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    

    if(s0.empty()){
        cout<<"s0 is emplty string"<<endl;
    }

    //Append
    s0.append("I love c++");
    cout<<s0<<endl;
    s0 += " and Python";
    cout<<s0<<endl;

    //remove
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    //compare

    string str0="Apple";
    string str1="Mango";
    cout<<str0.compare(str1)<<endl;
    cout<<str1.compare(str0)<<endl;
    cout<<str1.compare(str1)<<endl;
    
    //overloaded operator
    //str0<str1
    //str1<str0

    //Find subtring
    string s="I want to have apple juice";
    int index=s.find("apple");
    cout<<index<<endl;

    //Remove a word from the string

    string word="apple";
    int len=word.length();
    cout<<s<<endl;
    s.erase(index,len+1);
    cout<<s<<endl;

    // iterate over all the character in the string
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<"";
    }
    cout<<endl;
    //iterator
    for(auto it =s1.begin();it!=s1.end();it++){
        cout<<(*it)<<"";    
    }
    cout<<endl;
    //for Each Loop
    for(auto c:s1){
        cout<<c<<"";
    }

    return 0;
}