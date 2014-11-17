//http://www.codechef.com/problems/DISCHAR/

#include <iostream>
#include <cmath>
#include <cstring>
 
using namespace std;
 
int main()
{
int no_of_tests =0;
string str;
 
cin>>no_of_tests;
 
while(no_of_tests--)
{
 
int arr[26];
for ( int i = 0 ; i < 26 ; i++)
    arr[i]=0;
 
 cin>>str;
int tlength = str.length();
int temp = 0, count = 0 ;
 
 while(temp != tlength)
{
  int value  = str[temp]-'a';
     if (arr[value] == 0)
      {
         count++;
         arr[value]=1;
      }
    temp++;
}
 
cout<<count<<"\n";
}
return 0;
}
