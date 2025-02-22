// zaliczeniePP5.cpp Krystian Prządka

#include <iostream>
#include <math.h>
#include <string.h>

int zamienNaDzies(char input[], int baza) {
    int j = strlen(input) - 1, k = 0, wynik=0; //deklaracja potrzebnych zmiennych
	while (j>=0)
	{
		long int i = (int)input[j--];
		if (i>=48&&i<=57) //zamieniamy z charow inputu na inty przypisane cyfrom i literom
		{
			i -= 48; // 0 to char 48, i w gore
		}
		else if (i>=65 && i<=90)
		{
			i -= 55; // A to 10, B to 11 itp
		}
		else if(i>=97 && i<=122)
		{
            i-=61;      //36=a
        }
		wynik = wynik + (i*pow(baza,k++));
	}
	return wynik;
}
void zwracanie(int liczba, int baza) {
	if (liczba > 0)
	{
		zwracanie(liczba / baza, baza); //zwraca po cyfrze od lewej strony (najwiekszej)
		long int i = liczba % baza;
		//obsluga roznych baz
		if (i>=0 && i <=9 )
		{
			i += 48;
		}
		else if (i>=10 && i<= 35)
            {
			i += 55;
		}
        else if(i>=36 && i<=61)
		{
            i+=61;
        }
		std::cout << (char)i;
	}
 }

void zmienBaze(char input[], int bazaStart, int bazaCel) {
	long int temp = zamienNaDzies(input, bazaStart);
	if (temp == 0)
	{
		std::cout << "0";
		return;
	}
	zwracanie(temp, bazaCel);
}


int main()
{
	char liczba[50];
	int baza1, baza2;
	std::cout << "Podaj system liczbowy w ktorym podasz liczbe: " << std::endl;
	std::cin >> baza1;
	std::cout << "\nPodaj liczbe: " << std::endl;
	std::cin >> liczba;
	std::cout << "\nPodaj na jaka baze chcesz zamienic liczbe: " << std::endl;
	std::cin >> baza2;
	if(baza2<2 || baza2>60){
        std::cout << "\nBaza nieobslugiwana" << std::endl;
        return 1;
	}
	std::cout << "\nLiczba w tej bazie to: " << std::endl;
	zmienBaze(liczba, baza1, baza2);
    return 0;
}


