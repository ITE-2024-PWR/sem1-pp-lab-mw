//Zaliczenie Zadania Zaawansowane z Podstaw Programowania
//Autor - Krystian Prządka

#include <iostream>
#include <String>

struct Element {
    std::string nazwa;
    int pole;
    int obwod;
    Element* nast;
    Element* poprz;

    Element(std::string n = "", int poleVal = 0, int obwVal = 0, Element* next = nullptr, Element* prev = nullptr)
        : nazwa(n), pole(poleVal), obwod(obwVal), nast(next), poprz(prev) {}
};

class Ksztalty {
private:
    Element* head; // wskaźnik na pierwszy węzeł
    Element* tail; // wskaźnik na ostatni węzeł
public:
    Ksztalty() {
        head = nullptr;
        tail = nullptr;
    }
    // Dodawanie elementu
    void dodaj(std::string nazwa, int pole, int obwod, int position) {
        
        Element* nowy = new Element(nazwa, pole, obwod);

        if (head == nullptr) { // Lista jest pusta
            head = nowy;
            tail = nowy;
            return;
        }

        if (position <= 1) { // dodanie na początek listy
            nowy->nast = head;
            head->poprz = nowy;
            head = nowy;
            return;
        }

        Element* temp = head;
        int index = 1;

        // przejście do miejsca
        while (temp->nast != nullptr && index < position - 1) {
            temp = temp->nast;
            index++;
        }

        // dodawanie na końcu 
        if (temp->nast == nullptr) {
            temp->nast = nowy;
            nowy->poprz = temp;
            tail = nowy;
        }
        else {
            // wstawianie w środku 
            nowy->nast = temp->nast;
            nowy->poprz = temp;
            temp->nast->poprz = nowy;
            temp->nast = nowy;
        }
    }
    
    void usun(int position) {
        if (head == nullptr) {
            std::cout << "\nLista jest pusta\n" << std::endl;
            return; // lista pusta
        }

        Element* temp = head;

        if (position <= 1) { // usuwanie z początku
            head = head->nast;
            if (head != nullptr) {
                head->poprz = nullptr;
            }
            else {
                tail = nullptr;
            }
            delete temp;
            return;
        }

        int index = 1;

        // przejście do pozycji
        while (temp != nullptr && index < position) {
            temp = temp->nast;
            index++;
        }

        if (temp == nullptr) {
            std::cout << "\nNie ma takiego elementu\n" << std::endl;
            return;
        }

        if (temp->poprz != nullptr) {
            temp->poprz->nast = temp->nast;
        }

        if (temp->nast != nullptr) {
            temp->nast->poprz = temp->nast;
        }

        if (temp == tail) {
            tail = temp->poprz;
        }

        delete temp;
    }
    int length() {
        Element* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->nast;
        }
        return count;
    }
    void wyswietlListe() {
        Element* temp = head;
        int licznik = 1;
        while (temp != nullptr) {
            std::cout << "\n[" << licznik << "] " << temp->nazwa << " " << "Obwod: " << temp->obwod << " Pole: " << temp->pole;
            temp = temp->nast;
            licznik++;
        }
        std::cout << std::endl;
    }

};


int main()
{
    Ksztalty figury;
    int opcja = 1, indeks = 0, poleT = 0, obwT=0;
    std::string nazwyT;
    std::cout << "Witam w dynamicznej tablicy figur. Wybierasz akcje wpisujac przypisana jej cyfre. Obwod oraz pole musza byc liczbami naturalnymi\n";
    while (opcja != 0)
    {
        std::cout << "\nWybierz operacje: \n1 Dodaj figure do listy\n2 Usun figure z listy\n3 Wyswietl liste figur\n0 Zakoncz program\n\n";
        std::cin >> opcja;
        switch (opcja)
        {
        case 1:
            std::cout << "\nPodaj nazwe figury: \n";
            std::cin >> nazwyT;

            std::cout << "\nPodaj pole figury: \n";
            std::cin >> poleT;
            std::cout << "\nPodaj obwod figury: \n";
            std::cin >> obwT;
            std::cout << "\nWybierz miejsce docelowe pozycji: \n";
            std::cin >> indeks;
            
            figury.dodaj(nazwyT, poleT, obwT, indeks);
            break;
        case 2:
            if (figury.length() == 0)
            {
                std::cout << "Lista jest pusta.\n";
                break;
            }
            std::cout << "\nWybierz pozycje do usuniecia: \n";
            std::cin >> indeks;
            figury.usun(indeks);
            break;
        case 3:
            if (figury.length() == 0)
            {
                std::cout << "Lista jest pusta.\n";
                break;
            }
            figury.wyswietlListe();
            break;
        default:
            break;
        }
    }
}
