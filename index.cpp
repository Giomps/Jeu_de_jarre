#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
using namespace std;

int main() {

    srand(time(NULL));

    int choix, level, jarrePiege, cle = 0;

    cout << "Bienvenue dans le jeu des Jarres !" << endl;
    cout << "Choisissez un niveau de difficulte : " << endl; 
    cout << "1 - Un serpent pour 5 Jarres" << endl;
    cout << "2 - Deux serpents pour 5 Jarres" << endl;
    cout << "3 - Trois serpents pour 5 Jarres" << endl;

    cin >> level;
    if(level == 1) {
        jarrePiege = rand() % 5 + 1;
        cout << "1 - Un serpent pour 5 Jarres" << endl;
    } else if(level == 2) {
        jarrePiege = rand() % 4 + 1;
        cout << "2 - Deux serpents pour 5 Jarres" << endl;
    } else if(level == 3) {
        jarrePiege = rand() % 3 + 1;
        cout << "3 - Trois serpents pour 5 Jarres" << endl;
    }

    while(cle != 3) {
        cout << "Vous disposez de 5 jarres devant vous. Choisissez 1, 2, 3, 4 ou 5" << endl;
        cin >> choix;
        
        if(choix == jarrePiege) {
            cle -= 1;

            if(cle == 1 || cle == 0) {
                cout << "Perdu ! un serpent apparait dans la jarre numero " << jarrePiege << ". Vous possedez desormais " << cle << " cle" << endl;
            } else {
                cout << "Perdu ! un serpent apparait dans la jarre numero " << jarrePiege << ". Vous possedez desormais " << cle << " cles" << endl;
            }
            
        } else {
            cle += 1;

            if(cle == 1 || cle == 0) {
                cout << "Gagne ! vous avez remporter une cle magique. Vous possedez desormais " << cle << " cle" <<  endl;
            } else if (cle == 3) {
                cout << "Gagne ! Vous avez remporte " << cle << " cles. Vous devenez le roi du temple" << endl;
            } else {
                cout << "Gagne ! vous avez remporter une cle magique. Vous possedez desormais " << cle << " cles" <<  endl;
            }
        }
    }

    return 0;
}