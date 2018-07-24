#include <iostream>
#include<utility>
#include <vector>
#include <string>

using namespace std;


char firstNotRepeatingCharacter(std::string s) {
  vector< pair<char,int> > v;

   char firstC = s[0];
   pair<char,int> firstPair;
   firstPair = make_pair(firstC,0);

   v.push_back(firstPair);

   for(int i = 0; i < s.length(); i++)
   {
      bool exists = false;
      char c = s[i];
   //   cerr << "c is : " << c << endl;
      
      //check if char in set
      for(int j = 0; j < v.size(); j++)
      {
         if(v[j].first == c){
            v[j].second++;
            exists = true;
         }
      }

      if(!exists){
      pair<char,int> temp;
      temp = make_pair(c,1);
      v.push_back(temp);
      }  
   }
   
   // cerr << "SIZE OF VECTOR IS : " << v.size() << endl;
   for(int i = 0; i < v.size();i++)
   {
      if(v[i].second == 1)
      {
       // cerr << "vector.first =" << v[i].first << endl;
       // cerr << "vector.second = " << v[i].second << endl;
       return v[i].first;
      }
   }
   
   return '_';
   
}


int main(){

  cerr<< "first nonrepeat is: " <<  firstNotRepeatingCharacter("abacabaabacaba") << endl;;
   cerr<< "DONE" << endl;
   return 0;
}