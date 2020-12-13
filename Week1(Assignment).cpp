//Program to Decompress a File
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream inFile;									//Open text file to read
	inFile.open("compressed1.txt");
	ofstream file;
	file.open("Output.txt");							//open text file to write
	char ch;
	inFile.get(ch);										// Read the first character
	while (!inFile.eof()) {								// Runs till the end of file
		if (iscntrl(ch) ){
			ch=inFile.get();							//Getting next character in ch
			unsigned char temp;							//Declaring temperary variable
			temp = ch;
			unsigned ch = inFile.get();					//Getting next character in ch
			short int count;							//Declaring count for printing the character(count times)
			count = (short int)ch;
			for (short int i = 0; i < count; i++) {		//Loop to print the character count number of times
				file << temp;							//Write in a file
			}
		}
		else {
			file << ch;
		}
		inFile.get(ch);
	}
	inFile.close();										//Close of input file
	file.close();										//Close of output file
	return 0;
}