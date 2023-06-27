#include<iostream>
#include<map>
#include<string>
#include<list>

using namespace std;

int main(){



    map<int, list<string>>Dictionary;

    list<string> Family {"Maa", "Baba", "Didi"};
    list<string> Brothers {"Tambuli", "Veeru", "Sabuj"};
    list<string> CloseFriends {"Limbo", "Atrij", "Shaurya"};
    list<string> Friends {"Uday", "Sukrit", "Ayantik"};
    list<string> Group {"Swapnodip", "Ritankar", "Arpan"};


    Dictionary.insert(pair<int, list<string>>(1, Family));
    Dictionary.insert(pair<int, list<string>>(2, Brothers));
    Dictionary.insert(pair<int, list<string>>(3, CloseFriends));
    Dictionary.insert(pair<int, list<string>>(4, Group));
    Dictionary.insert(pair<int, list<string>>(5, Friends));

    for( auto pair:Dictionary ){
        cout<<pair.first<<" - ";

        for(auto groups : pair.second)
            cout<<groups<<", ";

        cout<<endl;
    }


    return 0;
}