#include<iostream>
using namespace std;
int main(){
	int i,input;
	
	//guess the number 65
	//the user has 100 chances
	for(i=1;i<101;i++)
	{
		cin>>input;
		if(input==65) //only takes place if the input is exactly 35
		{
			cout<<"Congrats You have guessed correct";
			break;
		}
	}

	
}
