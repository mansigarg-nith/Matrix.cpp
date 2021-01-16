#include <iostream>
using namespace std;
int main(){
	int m, n;
	cout<<"Enter the row size of matrix: ";
	cin>>m;
	cout<<"Enter the column size of matrix: ";
	cin>>n;
	int arr1[m][n], arr2[m][n], temp[m][n];
	cout<<"Enter the elements of first square matrix: "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the elements of second square matrix: "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>arr2[i][j];
		}
	}
	int choice;
	cout<<"1. Addition of matrices"<<endl;
	cout<<"2. Subtraction of matrcices"<<endl;
	cout<<"3. Multiplication of matrices"<<endl;
	cout<<"Choose one of them: ";
	cin>>choice;
	switch(choice){
		case 1:
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					temp[i][j] = arr1[i][j] + arr2[i][j];
				}
			}
			cout<<"Addition of matrices is: "<<endl;
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					cout<<temp[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
		case 2:
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					temp[i][j] = arr1[i][j] - arr2[i][j];
				}
			}
			cout<<"Subtraction of matrices is: "<<endl;
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					cout<<temp[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
		case 3:
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					temp[i][j] = arr1[i][j] * arr2[i][j];
				}
			}
			cout<<"Multiplication of matrices is: "<<endl;
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					cout<<temp[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
	}
}

