#include <iostream>
#include <string>

using namespace std;

int main() {

bool win = false;
	
	int min=1,max=100;
	int debug=0;
	string point;
	
	cout<<"Computer will now try to guess the correct number between 1-100."<<'\n';
	cout<<"Syntax for correctly pointing computer is too_low, too_high or you_guessed_it."<<endl;
	
	
	
	while(win==false){
	    
	    int guess = min + (rand() % (int)(max - min + 1));
     cout<<guess<<endl;
     debug++;
//if (debug==10){break;}
     cout<<"Is this your number? "<<guess<<endl;
     cin>>point;
     
     if(point=="too_low"){min=guess+1;}
     else if (point=="too_high"){max=guess-1;}
     else if(point=="you_guessed_it"){win=true;break;}

     cin.clear();
	 cin.ignore(256, '\n');



}

cout<<"I guessed it! It only took me "<<debug<<" tries! Thought i might be better at this since i'm a machine"<<endl;
cin>>point;


	return 0;
}