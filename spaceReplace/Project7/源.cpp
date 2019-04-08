#include <iostream>
using namespace std;
void replaceSpace(char *str, int length) {
	int i ,j,z;
	for (i = 0; i < length; i++)
	{
		if (str[i] == ' ')
		{
			for ( j = length - 1; j > i; j--)
			{
				str[j + 2] = str[j];
			}
			str[i] = '%';
			str[i + 1] = '2';
			str[i + 2] = '0';
			length += 2;
		}
	}
	for (i = 0; i < length; i++)
		cout << str[i];
}

int main()
{
	int length;
	cin >> length;
	char * a = new char[length+1];
	cin.getline(a,length+1);
	replaceSpace(a, length);
	return 0;
}
