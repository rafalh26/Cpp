//MadLibClone
#include<iostream>
#include<string>

using namespace std;






int main()
{
		

		//get input
	//input structure

	string adjective1, adjective2, adjective3;
	string occupation1, occupation2;
	string girlsName, boysName, mansName, placeName;
	string clothing, hobby;

	cout << "Please enter adjective: \n";
	getline(cin, adjective1);
	cout << "Please enter girls name: \n";
	getline(cin, girlsName);
	cout << "Please enter adjective2 name: \n";
	getline(cin, adjective2);
	cout << "Please enter occupation: \n";
	getline(cin, occupation1);
	cout << "Please enter placename: \n";
	getline(cin, placeName);
	cout << "Please enter plural cloth name: \n";
	getline(cin, clothing);
	cout << "Please enter hobby: \n";
	getline(cin, hobby);
	cout << "Please enter adjective: \n";
	getline(cin, adjective3);
	cout << "Please enter occupation: \n";
	getline(cin, occupation2);
	cout << "Please enter boy's name: \n";
	getline(cin, boysName);
	cout << "Please enter man's name: \n";
	getline(cin, mansName);

	//here is the story
	cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 << " " 
		 << occupation1 << " in the Kingdom of " << placeName << ". She loved to wear " 
		 << clothing << " and " << hobby << " .She wanted to marry the" << adjective3 << " " << occupation2 << " named " 
		 << boysName << " but her father, King " << mansName << " forbid her from seeing him."<<endl;

	return 0;
}