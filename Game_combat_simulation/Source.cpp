#include <iostream>
#include <windows.h>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int a, c, h, l;
	a = 20;
	c = 30;
	h = 100;
	
	while (h > 0)
	{
		cout << "Attack: " << a << "                                      " << "Monster HP: " << h << endl;
		cout << "Critical chance: " << c << " %" << endl;
		cout << "Press Spacebar 2 times and Enter to attack." << endl;
		char ans; 
		while (getchar() != 32 || getchar() != ' ');
		{
			srand(time(0));
			for (int i = 0; i < 10; i++)
			{
				l = (rand() % 100) + 1;
			}
			if (l <= c)
			{
				h = h - (a*2);
				cout << "You critical attacked!"<< endl;
			}
			else
			{
				h = h - a;
				cout << "You attacked!"<< endl;
			}
			system("pause");
			system("CLS");
		}
	}
	cout << "You win!"<< endl;
	system("pause");
	return 0;
 }