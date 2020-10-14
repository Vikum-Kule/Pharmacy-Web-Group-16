#include <iostream>
using namespace std;
int Fibo(int a ){
	if(a==0 || a==1){
		return a;
	}else{
		return (Fibo(a-1)+Fibo(a-2));
	}
}

int main(){
	
	cout << "Which number you want to find in fibo"<<endl ;
	int a;
	cin>> a;
 	cout<<"The Fibo is:"<<Fibo(a);
	

}
