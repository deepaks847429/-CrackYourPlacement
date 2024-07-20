#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    unordered_map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        // increase the count of character str[i] by 1
        count[str[i]]++;
    }
    // iterating through the unordered map
    for (auto it : count) {
        // if the count of characters is greater than 1 then
        // duplicate found
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
int main()
{string str = "test string";
    printDups(str);
    return 0;
}
void printdps(string str){
  unordered_map<char, int> count;
  for(int i=0; i<str.length(); i++){
    count[str[i]]++;
  }
  for(it : count){
    if(it.second>1){
      cout<<it.first << " "<< it.second;
    }
  }
}

