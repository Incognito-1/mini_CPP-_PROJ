#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	
srand(time(0));
 
 cout<<"Guess the number"<<endl;

 int num;
 cin>>num;
 
 
int rando = 1 + (rand() % 100) ;
if(num==rando)
{
	cout<<"Congrats! You guessed right";
}
else if(num>rando){
	cout<<"Oops! Your guess is too high";
}
else{
	cout<<"Oops! Your guess is too low";
}



return 0;
}