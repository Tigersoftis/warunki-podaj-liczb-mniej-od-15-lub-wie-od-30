//Warunki - podaj liczb� mniejsz� od 15 lub wi�ksz� od 30
#include <iostream> 
 
using namespace std;

int main() 

{
	int liczba;
	cout << "Podaj liczbe calkowita mniejsza od 15 a wieksza od 30:   ";
	cin >> liczba;
	liczba < 15 || liczba > 30 ? cout << "\n\nDobrze. \n\n": cout << "\n\nNiestety, zla odpowiedz \n\n";
	system ("pause");
	return 0;
}
