#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

void PrintMAtrix(const vector<vector <int>>&matrix){
	for(vector el:matrix){
      for(int num:el){
       cout<<num<<" ";
      }
      cout<<"\n";
    }
	}

void Transp(const vector<vector <int>>&matrix){
	int n=matrix.size();
	int m=matrix[0].size();
	vector <vector <int>> matrix2(m,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			matrix2[j][i]=matrix[i][j];
			}
		}
    PrintMAtrix(matrix2);
	}

int main(){
    vector <vector <int>> matrix{
      {1, 2, 3},
      { 2, 5, 8},
      {5, 8 ,7},
      {2,8,5}
    };
    cout<<"Matrix:\n";
    PrintMAtrix(matrix);
    cout<<"After:\n";
    Transp(matrix);
    
  return 0;
 }

// Created by stud-17 on 9/24/24.
//
