#include <iostream>
using namespace std;
int LuckyNumber(int B[],int size){
//	cout<<"Sss";
	int sum = 0;
	for(int i = 0 ; i< size ; i++){
		sum=sum+B[i];
	}
	cout<<sum;
}

int main(){
	int n,count,number;
	cout<<"Enter your Birthdaya (19970922) Form"<<endl;
	cin>>number;
	n=number;
	count = 0;
	while (n != 0)
	{
	    n /= 10;
	    count++;
	}
	int k= count;
	//cout<<count<<endl;
	int B[count];
	n=number;
	if(count!=0){
	   count = 0;    
	   while (count<k){
	   	//	count<<n;
	       B[count] = n % 10;
	      // cout<<B[count];
	       n /= 10;
	       count++;
	   }
	}

//   for(int i=0;i<10;i++){
//		printf("%d",B[i]);
//	}
   LuckyNumber(B,k);
}
   

	
	
	
	
	
	
