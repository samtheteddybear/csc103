#include <iostream>
using namespace std; 
using std::string;
int main (){
	#if 0
	cout<<"How is mta treating you:"<<endl; 
	string response; 
	cin>>response; 
	if (response=="terrible"){
		cout<<"I know right!"<<endl; 
		
	}
	else {
		cout<<"interesting"<<endl; 
	}
	#endif
#if 0 // doesnt run the statement underneath this 
	while (true){ 
		cout<<"O.0"; 

//Example: sum integers from 1 to 100*/
	//To get the total value from 1 to 100 using while loop: 
	int i=1;// This variable will run through integers  
	int sum=0 ; //Sum of all numbers from value of 'i' so far
	while(i<=100){
 		sum= sum+i ; //sum+=(shorthand) ----it adds the value of i as it goes through the while loop
		i = i+1; //shorthand i++
	//check through how many i it has been through 
	}
	cout<<sum<<endl; 
	// Formula for this one is (n* (n+1) )/2 wil give you the sum of all integers before n. 
	
#endif 

	for (int i=1; i<=100;i++){
//Inside the for loop (first happens once, check each time for the statement, happens at end of each iteration )
		sum+=i; 
		
	}
	cout<<sum<<endl; 
	



/*
NOTES: 

cout << 6/7 << endl; this will print the integer, but not the remainder.
to get around this, you can divide an int by a float to get the entire number.
The computer tends to favor floating points.
you can also do cout << x / (double)y << endl; to divide by a double.

 
If statemet general form: 
	* if(<boolean expression>){   
	**when using if statement be careful with '='<- (set the variable with number)  and '==' <-(this test if statements are equal)** 
	*	any statement can go here!
	*} else if (<some other boolean expression>){ 
	*	do this if scond boolean is true 
	*} <potentially more else ifs...> { 
	* else {
		do these if all other conditions failed. 
	*}
	*
	if 0:      : Another way to comment 
	#endif 

LOOPS: 
	- Run indefinitly if statement is true 
	CTRL C if you want it to stop 

For loops: 
More commonly used when you know the "bounds"



*/ 	








	return 0; 
}
