/* 	Author: PORQUILLO. Aljan A.
	BSCSSE - NO1
*/ 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[64];
	cout << "Enter a String: ";
	cin.getline(str,64);
	
	int x = 0, alpha[26] = {0}, y;
    int words(0); 
    
	for(int i=0; str[i]!='\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '.'  || str[i] == ',' ) 
		{
			words++;
		} 	
	}
	while (str[x] != '\0') 
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			y = str[x] - 'a' ;
			++alpha[y];
		}
		
			if (str[x] >= 'A' && str[x] <= 'Z')
		{
			y = str[x] - 'A' ;
			++alpha[y];
		}
		++x;
	}
	cout << "\n\nThe string is composed of:" << endl;
	cout << words+1 << " words" << endl;
	for (x = 0; x < 26; x++)
    {
    	if (alpha[x] != 0)
		{
			cout<< char(x + 'a')<<" : "<< alpha[x]<< endl;
		}
	}
	return 0;
}
