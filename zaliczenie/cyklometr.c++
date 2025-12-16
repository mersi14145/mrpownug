#include "cyklometr.h"

using namespace std;

void SZUKACZ(const Graf& graf, ofstream& str_wyjsciowy) //int wierzcholek, const Graf& graf, map<int, bool>& odwiedzone, ofstream& str_wyjsciowy
{    
    for (const auto& p : graf) {
        int wierzcholek = p.first;
        const vector<int>& sasiedzi = p.second;

        str_wyjsciowy << wierzcholek << " -> {";

        for (size_t i = 0; i < sasiedzi.size(); i++) {
            str_wyjsciowy << sasiedzi[i];
            if (i + 1 < sasiedzi.size())
                str_wyjsciowy << ", ";
        }

        str_wyjsciowy << "}\n";
    }
}


/*odwiedzone[wierzcholek] = true;
    str_wyjsciowy << wierzcholek << " ";

    auto it = graf.find(wierzcholek); // it to iterator do pary klucz-wartość. A find zwraca iterator do elementu lub graf.end() jeśli nie znaleziono.
    if (it != graf.end()) {
        for (int sasiad : it->second) {
            if (!odwiedzone[sasiad]) {
                SZUKACZ(sasiad, graf, odwiedzone, str_wyjsciowy);
            }
        }
    }*/