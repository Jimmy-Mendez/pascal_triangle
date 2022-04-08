#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void makeTriangle(int numRows);
int factorial(int n);
int choose(int n, int k);

int main(){
	int rows;
	cout << "Enter the number of rows you want in triangle: ";
	cin >> rows;
	makeTriangle(rows);
}

void makeTriangle(int numRows){
	for(int i = 0; i < numRows; i++){
		int numTabs = numRows - i - 1;
		for(int j = 0; j < numTabs; j++){
			cout << "\t";
		}
		for(int k = 0; k < i+1; k++){
			cout << choose(i,k) << "\t\t";
		}
		cout << endl;
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
