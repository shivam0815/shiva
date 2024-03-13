#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
   // creating unordered_map
   unordered_map<string, int> map;
 
//add elements into it
map["sai"] = 123;
map["bargav"] = 234;
map["shyam"] = 456;''
 
 
//printing those values using iterator
for(auto it = map.begin(); it != map.end(); it++){
    cout << it->first << " - " << it->second << endl;
}
 
//find for element
auto it = map.find("sai");
 
if(it != map.end()){
    cout << "Found the key" << endl;
}
 
//size of map
cout <<"map size is " << map.size();
 
//delete element
map.erase("shyam");
 
 
}