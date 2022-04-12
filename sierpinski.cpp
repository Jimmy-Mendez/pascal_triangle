#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void giveTriangle(int numRows, ofstream& file);

int factorial(int n);
int choose(int n, int k);

int main(){
	ifstream numRows("ROWS.txt");
	ofstream outputFile("TRIANGLE.txt", ofstream::out);
	int rows;	
	numRows >> rows;
	giveTriangle(rows, outputFile);
	outputFile.close();
}

void giveTriangle(int numRows, ofstream& file){
	for(int i = 0; i < numRows; i++){
		int numTabs = numRows - i - 1;
		for(int k = 0; k < i+1; k++){
			file << choose(i,k) << " ";
		}
		file << endl;
	}	
}

int factorial(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}

int choose(int n, int k){
	return (factorial(n))/((factorial(k))*(factorial(n-k)));
}
