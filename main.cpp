#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS NELEMENTS helyett
    std::cout << '1-100 ertekek duplazasa' // expected ;
    for (int i = 0;) // for loop szintaktikai hiba int i=0; i<N_ELEMENTS; i++
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" // érték üres és expected ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // átlag init 0 és float használata célszerűbb
    for (int i = 0; i < N_ELEMENTS, i++) //for loop szintaktikai hiba ,->;
    {
        atlag += b[i] //expected ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; 
    //dinamikusan lefoglat memóriát törölni kell
}
