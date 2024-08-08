#include<iostream>
using namespace std;

void drawPyramid(int floors){

	int stars=1;
	int width = 2 * floors - 1;
	for(int i=1; i<=width; i++){
		for(int j=0; j<width-1; j++)
			cout<<" ";
		for(int j=0; j<=stars-1; j++)
			cout<<"*";
		width=width-1;
		stars=stars+2;
		cout<<endl;
	}
	
}

int main(){
	drawPyramid(50);

	return 0;
}