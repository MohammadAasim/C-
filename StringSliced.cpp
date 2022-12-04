#include <iostream>
using namespace std;
#include <string>
int main()
{
	//Write code here
	string str;
	getline(cin,str);
	int a,b;
	cin>>a>>b;
	
	for(int i=a;i<=b;i++){
        cout<<str[i];
    }

}