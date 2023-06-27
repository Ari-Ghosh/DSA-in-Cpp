#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){

    map<int, string>Dictionary;

    Dictionary.insert(pair<int, string>(1, "Arijit"));
    Dictionary.insert(pair<int, string>(2, "Veeru"));
    Dictionary.insert(pair<int, string>(3, "Sabuj"));
    Dictionary.insert(pair<int, string>(4, "Limbo"));
    Dictionary.insert(pair<int, string>(5, "Atrij"));

    for( auto pair:Dictionary )
        cout<<pair.first<<" - "<<pair.second<<endl;

    cout<<"SIZE OF DICTIONARY: "<<Dictionary.size()<<endl;

    Dictionary[1] = "Tambuli";

    for( auto pair:Dictionary )
        cout<<pair.first<<" - "<<pair.second<<endl;

    cout<<"SIZE OF DICTIONARY: "<<Dictionary.size()<<endl;

    Dictionary.erase(5);
    
    for( auto pair:Dictionary )
        cout<<pair.first<<" - "<<pair.second<<endl;
    
    cout<<"SIZE OF DICTIONARY: "<<Dictionary.size()<<endl;

    Dictionary.clear();

    for( auto pair:Dictionary )
        cout<<pair.first<<" - "<<pair.second<<endl;
    
    cout<<"SIZE OF DICTIONARY: "<<Dictionary.size()<<endl;

    return 0;
}