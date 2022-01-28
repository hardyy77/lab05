

#include <iostream>
using namespace std;

//zad 1
void dec_to_bin(int liczba);

//zad 2
int NWD(int a, int b);

//zad 3
int fib(int n);

int main()
{
	//zad 1
	int liczba;
	cout << "Podaj liczbę: ";
	cin >> liczba;

	cout << liczba << " po zamianie na postać binarną: ";
	dec_to_bin(liczba);
	cout << endl;

	return 0;

	//zad 2
	int a, b;

	cout << "Podaj dwie liczby: ";
	cin >> a >> b;

	cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << endl;

	system("pause");
	return 0;

	//zad 3
	int n;

	cout << "Podaj nr wyrazu ciągu: ";
	cin >> n;

	cout << n << " wyraz ciągu ma wartość " << fib(n) << endl;

	return 0;
}

//zad 1
void dec_to_bin(int liczba)
{
	int i = 31;
	bool ok = false;
	while (i--)
	{
		if (liczba >> i & 1 & !ok)
			ok = true;

		if (ok)
			cout << ((liczba >> i) & 1);

	}
}

//zad 2
int NWD(int a, int b)
{
	if (a != b)
		return NWD(a > b ? a - b : a, b > a ? b - a : b);
	return a;
}

//zad 3
int fib(int n)
{
	if (n < 3)
		return 1;

	return fib(n - 2) + fib(n - 1);
}