#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
void palindrome(char A[],int size){
	//cout<<"Hello";
	
	for(int i=0 ; i<(size/2) ; i++){
		if(A[i]!=A[size-i-1]){
			cout<<"N";
			return ;
		}
	}
	cout<<"P";
};
int main(){
	
	cout << "Enter your word to find is it palaigrom or not?" <<endl;
	string word;;
	cin>> word;
	int size = word.length();
	char A[size];
	strcpy(A,word.c_str());
//	for(int i=0;i<size;i++){
//		cout<<A[i];
//	}
	//for()
	palindrome(A,size);
	

}
