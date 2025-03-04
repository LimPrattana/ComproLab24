#include<iostream>

using namespace std;

//Write function count() here.
int count(int a[], int s){
	int c =0;
	for(int i=0;i<s;i++){
		bool u = true;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
			u = false;
			break;
		}
	}
	if(u) c++;
	}
	return c;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
