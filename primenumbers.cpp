#include<iostream>
#include<cmath>
using namespace std; 
//#if 0
int main(){
	int n;
	bool prime =true;
	
	while(cin>>n){
		// after every loop it will reset the value of prime 
		if (n<0){
			cout<<"Prime numbers are not negative"<<endl;
			
		}
		else if(n==0 || n==1) {
			cout<<n<<" is not a prime number!"<<endl;
			
		}
		for(int i=2;i<=(n-2);i++){//the for loop will start at 2 and go up to the inputted value
			if(n%i==0){ //if you mod n by i and see its 0 it will not be prime because it does not multiply by 1 and itself
				prime=false;}
	
	}
		if(prime==true){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
		prime=true;
					
	}
	return 0; 
	
}
