#include <iostream>
using namespace std;
int main(){
int n,temp,ldigit,rev=0;
cout<<"Enter number to check palindrome:";
cin>>n;
temp=n;
while(temp!=0){
ldigit=temp%10;
rev=rev*10+ldigit;
temp=temp/10;
}
if(rev==n)
{
cout<<n<<" is palindrome!";
}
else
{
cout<<n<<" is not palindrome!";
}
return 0;
}
