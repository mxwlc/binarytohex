#include <iostream>
#include <string>
#include <map>

using namespace std;


//4 binary bits to hex
string btoh(string number){
	map<string, string> table;
	table["0000"] = "0";
	table["0001"] = "1";
	table["0010"] = "2";
	table["0011"] = "3";
	table["0100"] = "4";
	table["0101"] = "5";
	table["0110"] = "6";
	table["0111"] = "7";
	table["1000"] = "8";
	table["1001"] = "9";
	table["1010"] = "A";
	table["1011"] = "B";
	table["1100"] = "C";
	table["1101"] = "D";
	table["1110"] = "E";
	table["1111"] = "F";
	if(!table.count(number)){
		return "Fail";
	}
	return table[number];
}



int main(){
	cout << btoh("1010");
}
