#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map <string,string> s;
    int n,i;
    string s1,s2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s1;
        cin>>s2;
        s.insert(make_pair(s1,s2));
        s.insert(make_pair(s2,s1));//s[s1]=s2
    }
    cin>>s1;
    cout<<s.find(s1)->second;
    return 0;
}
