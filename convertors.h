#include <iostream>
#include <string>
#include <map>

using namespace std;

//match tables
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

//hex to 4 bit binary
string htob(string number){
	map<string, string> table;
	table["0"]="0000";
	table["1"]="0001";
	table["2"]="0010";
	table["3"]="0011";
	table["4"]="0100";
	table["5"]="0101";
	table["6"]="0110";
	table["7"]="0111";
	table["8"]="1000";
	table["9"]="1001";
	table["A"]="1010";
	table["B"]="1011";
	table["C"]="1100";
	table["D"]="1101";
	table["E"]="1110";
	table["F"]="1111";
	table["a"]="1010";
	table["b"]="1011";
	table["c"]="1100";
	table["d"]="1101";
	table["e"]="1110";
	table["f"]="1111";
	if(!table.count(number)){
		return "Fail";
	}
	return table[number];
}
