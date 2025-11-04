#include <iostream>
using namespace std;
int main(){


int j;
string n;
cin>>j;
for (int i = 0; i < j; i++)
{
    /* code */


cin>>n;
if(n.length()>10){

cout<<n[0]<<n.length()-2<<n[n.length()-1]<<endl;

} else
cout<<n<<endl;
}

}