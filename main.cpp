#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

#include "convertors.h"

using namespace std;

//adds zeros to string thats shorter than 4
void addzero(string &number){
	int n = number.length();
	int z = n % 4;
	if(z==0){
		number = number;
	}
	else{
		for(int i = 0; i < (4-z); i++){
			number.insert(0,"0");
		}
	}
}

//from vector to output string
void output(vector<string> number, string mode){
	if(mode == "B" || mode == "b"){ // binary to hexadecimal
		for(int i = 0; i < number.size(); i++){
			cout << btoh(number[i]);
		}
	}
	else if(mode == "H" || mode == "h"){ // hexadecimal to binary
		for(int i = 0; i < number.size(); i++){
			cout << htob(number[i]);

		}
	}
}

//split number into groups
vector<string> splitnumber(string number, string mode){
	vector<string> output;
	string temp;
	if(mode == "B" || mode == "b"){ //binary to hexaaecimal
		int divnum = number.length() / 4;
		for(int n = 0; n < divnum; n++){
			temp = number.substr(n*4, 4);
			output.push_back(temp);
		}
	} 
	else if(mode == "H" || mode == "h"){// hexadecimal to binary
		for(int n = 0; n < number.length(); n++){
			temp = number.substr(n,1);
			output.push_back(temp);	
		}
	}

	return output;
}


int main(){
	cout << "Binary to Hexidecimal and Hexidecimal to Binary Convertor" << endl << endl;
	//TODO: add a FIG header might look cool
	
	//Choice between options
	string choice;
	while(true){
		cout << "Do you want to conver from [B]inary to hexadecimal or [H]exadecimal to binary? ";
		cin >> choice;	
		if(choice == "B" || choice == "b"){
			break;
		}
		else if(choice == "H" || choice =="h"){
			break;
		}
		cout << "Im sorry thats not a valid choice. " << endl;
	}
	cout << "Please insert a number" << endl;	
	string number;
	cin >> number;

	vector<string> fours = splitnumber(number, choice);
	output(fours, choice);

}
