#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	//Write your code here
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami ");
	for(int i=0;i<2;i++){
		list<string>::iterator c = line_up.begin();
		line_up.erase(c);
	}
	loc = find(line_up.begin(),line_up.end(),"Luffy");
	if (loc != line_up.end()) ++loc;
	line_up.insert(loc,"Narutu");
	loc = line_up.begin();
	line_up.insert(loc,"Prayath");

	loc = find(line_up.begin(),line_up.end(),"Prayath");
	line_up.insert(loc,"Tony");

	loc = find(line_up.begin(),line_up.end(),"Bob");
	if (loc != line_up.end()) line_up.erase(loc);

	for(int i=0;i<3;i++){
		list<string>::iterator c = line_up.begin();
		line_up.erase(c);
	}
	
	printList(line_up);
		
	return 0;
}
