#include<iostream>
using namespace std;


int main(){
	
	int toSearch, no;
	bool flag=0;
	
	cout<<"Enter no. of elements of Array : ";
	cin>>no;
	cout<<"\n";
	
	int array[no];
	int len = sizeof(array)/sizeof(int);
	
	for(int i=0; i<no; i++){
		cout<<"Enter element "<< i+1 <<": ";
		cin>>array[i];
	}
	
	cout<<"\nPlease Enter any number for search : ";
	cin>>toSearch;
	
	for(int i = 0; i < len; i++){
		if(array[i] == toSearch){
			flag = 1;
			cout<<"\n"<<array[i]<<" has been found at index : "<<i;
			break;
		}
	}
	if(flag == 0){
		cout<<"\n" <<toSearch<<" has not found";
	}
	cout<< "\n\nLength of Array is: "<<len;
	return 0;
}
