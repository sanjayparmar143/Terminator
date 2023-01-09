#include<iostream>

using namespace std;

main(){
	
	int a;
	int b;
	int c;
	char d[] = "a number cannot be divide by zero";
	
 	int e;
 	char f[] = "a person cannot be able to vote if his/her age is less than 18";
 	
	char g[1000];
	char h[] = "a password cannot be validate if it doesn?t contains an uppercase letter";
		
	cout<<"Enter first number : ";
	cin>>a;
	
	cout<<"Enter second number : ";
	cin>>b;
	
	try{
		
		if(b == 0){
			
			throw d;
		}
		
		else{
			c = a / b;
			cout<<"Answer is : "<<c<<endl;	
		}
	}
	
	catch(char []){
		
		cout<<d;
	}
	
	cout<<endl<<"Enter age : ";
	cin>>e;	
	
 	try{
		
		if(e<18){
			
			throw f;
		}
		
		else{
			
			cout<<"a person is able to vote";
		}
	}
	
	catch(char []){
		
		cout<<f;
	}
	
 	cout<<endl<<"Enter password : ";
	cin>>g;	
  	try{
		
		if(g[1000]==('A'||'B'||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z')){
	
			throw h;
		}
		
		else{
			
			cout<<"This password is valid";
		}
	}
	
	catch(char []){
		
		cout<<h;
	}
}
