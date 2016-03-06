#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<iomanip>

using namespace std;
void main()
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 1; i < 31; i++)
	{
	string fu;
	int num_1, num_2,num_3;
	int num_11, num_21;
	num_1 = (rand() %(100))+1 ;
	if (num_1 == 100){
		num_1 = (rand() % 99)+1;
		num_11 = num_1 + (rand() %( 99-num_1+1));
		cout << "(" << num_1 << "/" << num_11 << ")";
	}
	else cout << num_1;
	num_3 = (rand() % 100)%4;
	if (num_3 == 0) fu = '+';
	else if (num_3 == 1) fu = '-';
	else if (num_3 == 2) fu = '*';
	else fu = '/';
	cout << fu;
	num_2 = 1+rand() % (100);
	if (num_2 == 100){
		num_2 = (rand() % 99)+1;
		num_21 = num_2 + (rand() % (99-num_2+1));
		cout << "(" << num_2 << "/" << num_21 << ")";
	}
	else cout << num_2;
	cout << "=";
	cout << "\t";
	cout << endl;
	}

} 
