#include <iostream>
#include <stdio.h>
#include <ctime>
#include <map>
#include<cstring>

using namespace std;

int main(){
	
	// Initialize array of pointer
    const char* family[4] = { "Appah", "Ommah", "John", "Christine" };

    char x = 'y';

    int RandIndex;

    srand((int)time(0));

    /*
    for(int i = 0; i < 4; i++){
    	RandIndex = rand() % 4; //Generates random number between 0 and 3
    	cout << family[RandIndex] << endl;
    }*/

    // map implementation

    cout << "--- map implementation ---" << endl;

    map<string,int> familyMap;
  	map<string,int>::iterator it;
    
    while(x == 'y'){
    	
    	int count = 0;

    	while(familyMap.size() != 4){
	    	RandIndex = rand() % 4; //Generates random number between 0 and 3

	    	it = familyMap.find(family[RandIndex]);

	    	if(it == familyMap.end()){
	    		count++;
		    	familyMap[family[RandIndex]] = 0;
		    	cout << count << "." << family[RandIndex] << endl;
	    	}
    	}

    	familyMap.clear();
    	cout << "\n";    	
    	cout << "Another list (y/n)?: ";
    	cin >> x;
    }

    
}
