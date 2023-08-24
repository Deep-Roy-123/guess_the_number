#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int number,user_number;
    srand(time(0));
    number=rand()%100+1;
    cout<<"      Number Guessing Game:       "<<endl;
    do{
    	cout<<"Enter A Number between 1 and 100 :";
    	cin>>user_number;
    	if(number>user_number){
    		cout<<"Too Low !!"<<endl;;
		}
		else if(number<user_number){
			cout<<"Too High !!"<<endl;
		}
		else{
			cout<<"Wow!!"<<endl;
			cout<<"You Guess The Correct Number."<<endl;
		}
	}
	while(user_number!=number);
	return 0;
}
