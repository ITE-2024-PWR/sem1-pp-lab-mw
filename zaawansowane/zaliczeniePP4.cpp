//Zaliczenie Zadania Zaawansowane z Podstaw Programowania
//Autor - Krystian Prządka

#include <iostream>

class Komorka {
public:
    int zawartosc;
    Komorka* nastepnaKomorka;
    Komorka(int wartosc) {
        zawartosc = wartosc;
        nastepnaKomorka = nullptr;
    }
};

class Wieza {
private:
    Komorka* pierwsza;
public:
    Wieza() {
        pierwsza = nullptr;
    }
    void dodaj(int krazek) {
        Komorka* nowa = new Komorka(krazek);
        nowa->nastepnaKomorka = pierwsza;
        pierwsza = nowa;
    }

    void usun() {
        if (pierwsza!=nullptr)
        {
            Komorka* temp = pierwsza;
            pierwsza = pierwsza->nastepnaKomorka;
            delete temp;
        }
    }

    int pierwszyElement() {
        if (pierwsza == nullptr)
        {
            return 99;
        }
        return pierwsza->zawartosc;
    }
    
    int length() {
        int wynik = 0;
        Komorka* temp = pierwsza;
        while (temp != nullptr)
        {
            temp = temp->nastepnaKomorka;
            wynik++;
        }
        return wynik;
    }

    void wyswietlWieze() {
        Komorka* temp = pierwsza;
        while (temp != nullptr)
        {
            
            std::cout << std::endl;
            for (int i = 0; i < 9 - temp->zawartosc; i++)
            {
                std::cout << ".";
            }
            for (int i = 0; i < temp->zawartosc*2 - 1; i++)
            {
                std::cout << temp->zawartosc;
            }
            

            temp = temp->nastepnaKomorka;
        }
    }
};

int main()
{
    int wysokosc;
    int wybory1, wybory2;
    Wieza wieze[3] = {Wieza(), Wieza(), Wieza()};
    std::cout << "Witaj w symulatorze wiezy Hanoi.\nZadeklaruj wysokosc wiezy:\n";
    std::cin >> wysokosc;
    for (int i = wysokosc; i > 0; i--)
    {
        wieze[0].dodaj(i);
    }
    while (true)
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << "\nWieza " << i+1 << ":\n\n";
            wieze[i].wyswietlWieze();
        }
        std::cout << "\nZ ktorej wiezy chcesz wziac krazek?\n";
        std::cin >> wybory1;
        wybory1--;
        if (wybory1 < 0 || wybory1 > 2)
        {
            std::cout << "\nNie ma takiej wiezy.\n";
            continue;
        }
        if (wieze[wybory1].length() == 0)
        {
            std::cout << "\nWieza jest pusta.";
            continue;
        }
        std::cout << "\nNa ktora wieze chcesz przelozyc krazek?\n";
        std::cin >> wybory2;
        wybory2--;
        if (wybory2 < 0 || wybory2 > 2)
        {
            std::cout << "\nNie ma takiej wiezy.\n";
            continue;
        }
        if (wybory1 == wybory2)
        {
            std::cout << "\Nie mozesz przelozyc na te sama wieze.\n";
            continue;
        }
        if (wieze[wybory1].pierwszyElement() < wieze[wybory2].pierwszyElement())
        {
            wieze[wybory2].dodaj(wieze[wybory1].pierwszyElement());
            wieze[wybory1].usun();
        }
        else
        {
            std::cout << "\nNie mozesz tego tu przelozyc";
        }
        
    }
}

