#include<iostream>
using namespace std;

int ProblemOne()
{
	// List the sum of all multiples of 3 & 5 under 1000.
	int iResult = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			iResult += i;
		}
	} 
	return iResult;
}

int ProblemTwo()
{
	// Find the sum of even Fibonacci numbers below 4,000,000.
	int iNumOne = 0;
	int iNumTwo = 1;
	int iNextNum = 0;
	int iResult = 0;

	iNextNum = iNumOne + iNumTwo;

	while (iNextNum < 4000000)
	{
		iNumOne = iNumTwo;
		iNumTwo = iNextNum;
		iNextNum = iNumOne + iNumTwo;
		iResult = iNextNum;
	}
	return iResult;
}

int main()
{
	cout << ProblemTwo() << endl;
	system("pause");
	return 0;
}