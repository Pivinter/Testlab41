#include "pch.h"

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	cout << "N = "; cin >> N;
	if (N <= 22) {
		//1)
		S = 0;
		i = N;
		while (i <= 22)
		{
			S += sqrt(i * i + N * N) / i;
			i++;
		}
		cout << S << endl;

		//2)
		S = 0;
		i = N;
		do {
			S += sqrt(i * i + N * N) / i;
			i++;
		} while (i <= 22);
		cout << S << endl;

		//3)
		S = 0;
		for (i = N; i <= 22; i++)
		{
			S += sqrt(i * i + N * N) / i;
		}
		cout << S << endl;

		//4)
		S = 0;
		for (i = 22; i >= N; i--)
		{
			S += sqrt(i * i + N * N) / i;
		}
		cout << S << endl;
	}
	else cout << "The number is greater than 22" << endl;
	return 0;
}
