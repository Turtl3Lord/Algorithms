#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
void solveBruteForce(){
  //Since for each element text[i] we must to compare to text[i+j], the worst time is n(n+1)/2, that falls to n^2
  //The space complexity is O(1), since the bigest number of character is C = 128

    string text; 
    cin>>text;

    for (int i = 0; i < text.size(); i++)
    {
       
for (int j = i+1; j < text.size(); j++)
{
    if(text[i]==text[j]){
        cout<<"o caracter "<<text[i]<<" se repete"<<endl;
        return;
    }
}


    }
    cout<<"nenhum caracter se repete"<<endl;
    

}

void solve() {

    //this solutions take a O(C) time complexity (but since It is a constant, the big O falls into O(1))
    // where C is a constant that means the number of characters (what can change depending on the charset).
    // The space complexity is O(1), if you take C as a constant
   
    string text; 
    unordered_map<char,bool> characterList;
    cin>>text;

    for (int i = 0; i < text.size(); i++)
    {
       if(characterList[text[i]]){

      cout<< "o caracter "<<text[i]<<" se repete"<<endl;
    return;}
      characterList[text[i]] = true;
    }
    cout<<"nenhum caracter se repete"<<endl;
    
}

int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
       solveBruteForce();
    }
    
    return 0;
}