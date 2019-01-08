#include <iostream>
using namespace std;

float StudentGrade[4] = {0};
float temp = 0;

int main(){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << "Student #" << i+1 << ": Quiz #" << j+1 << ": ";
			cin >> temp;
			StudentGrade[i] += temp;
		}
	cout << "\nStudent #" << i+1 << " Average: " << StudentGrade[i] / 3 << "\n\n";
	}
}

