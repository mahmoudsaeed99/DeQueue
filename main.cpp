#include<iostream>
#include<queue>
#include<map>
using namespace std;

map<string,int> s;
priority_queue <int> g;
string enqueue(string value, int priority){
    s.insert(pair<string,int>(value,priority));

    g.push(priority);

}

string dequeue(){
map<string, int>::iterator it;
for (it = s.begin(); it != s.end();it++) {
        if(g.top()==it->second){
             string a=it->first;
             g.pop();
             s.erase(a);
             return a;
}
}
}



int main(){


enqueue("world", 10);
enqueue("Aeif", 5);
enqueue("Hello", 5);


 cout<<dequeue()<<endl;
 cout<<dequeue()<<endl;
 cout<<dequeue();




return 0;

}
