#include <iostream>
#include <Windows.h>
using namespace std;

void SetColor(int text, int bg) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}


void cards(char arr[][9], int size, int size2, char card, char suit) {
    
    char suitt = 3;
    switch (suit) {
    case 'H':
    case 'h': suitt = 3;
        break;
    case 'S':
    case 's': suitt = 6;
        break;
    case 'C':
    case 'c': suitt = 5;
        break;
    case 'D':
    case 'd': suitt = 4;
        break;
    }

    switch (card) {
    case '2': 
        arr[1][1] = 50;
        arr[2][1] = suitt;
        arr[2][4] = suitt;
        arr[11][4] = suitt;
        arr[12][6] = suitt;
        arr[12][7] = 50;
        break;
    case '3':

        arr[1][1] = 51;
        arr[2][1] = suitt;
        arr[2][4] = suitt;
        arr[7][4] = suitt;
        arr[11][4] = suitt;
        arr[12][6] = suitt;
        arr[12][7] = 51;
        break;
    case '4':

        arr[1][1] = 52;
        arr[1][2] = suitt;
        arr[3][6] = suitt;
        arr[3][2] = suitt;
        arr[11][2] = suitt;
        arr[11][6] = suitt;
        arr[12][6] = suitt;
        arr[12][7] = 52;
        break;
    case '5':

        arr[1][1] = 53;
        arr[1][2] = suitt;
        arr[3][6] = suitt;
        arr[3][2] = suitt;
        arr[7][4] = suitt;
        arr[11][2] = suitt;
        arr[11][6] = suitt;
        arr[12][6] = suitt;
        arr[12][7] = 53;
        break;
    case '6':

        arr[1][1] = 54;
        arr[1][2] = suitt;
        arr[3][6] = suitt;
        arr[3][2] = suitt;
        arr[7][2] = suitt;
        arr[7][6] = suitt;
        arr[11][2] = suitt;
        arr[11][6] = suitt;
        arr[12][6] = suitt;
        arr[12][7] = 54;
        break;
    case '7':

        arr[1][1] = 55;
        arr[1][2] = suitt;
        arr[3][6] = suitt;
        arr[3][2] = suitt;
        arr[5][4] = suitt;
        arr[7][2] = suitt;
        arr[7][6] = suitt;
        arr[11][2] = suitt;
        arr[11][6] = suitt;
        arr[13][6] = suitt;
        arr[13][7] = 55;
        break;

    case '8':

        arr[1][1] = 56;
        arr[1][2] = suitt;
        arr[3][6] = suitt;
        arr[3][2] = suitt;
        arr[5][4] = suitt;
        arr[7][2] = suitt;
        arr[7][6] = suitt;
        arr[9][4] = suitt;
        arr[11][2] = suitt;
        arr[11][2] = suitt;
        arr[13][6] = suitt;
        arr[13][7] = 56;
        break;

    case '9':

        arr[1][1] = 57;
        arr[1][2] = suitt;
        arr[3][6] = suitt;
        arr[3][2] = suitt;
        arr[4][4] = suitt;
        arr[6][2] = suitt;
        arr[6][6] = suitt;
        arr[8][6] = suitt;
        arr[8][4] = suitt;
        arr[11][2] = suitt;
        arr[11][2] = suitt;
        arr[13][6] = suitt;
        arr[13][7] = 57;
        break;
        
    case '1' :

        arr[1][1] = 49;
        arr[1][2] = 48;
        arr[1][3] = suitt;
        arr[3][6] = suitt;
        arr[3][2] = suitt;
        arr[4][4] = suitt;
        arr[6][2] = suitt;
        arr[6][6] = suitt;        
        arr[8][4] = suitt;
        arr[9][2] = suitt;
        arr[9][6] = suitt;
        arr[11][2] = suitt;
        arr[11][6] = suitt;
        arr[13][5] = suitt;
        arr[13][6] = 49;
        arr[13][7] = 48;
        break;

    case 'j':
    case 'J':
        arr[1][1] = 74;
        arr[2][1] = suitt;
        arr[7][6] = suitt;
        arr[7][7] = 74;
        arr[12][7] = suitt;
        arr[13][7] = 74;
        break;

    case 'q':
    case 'Q':
        arr[1][1] = 81;
        arr[2][1] = suitt;
        arr[7][6] = suitt;
        arr[7][7] = 81;
        arr[12][7] = suitt;
        arr[13][7] = 81;
        break;
    case 'K':
    case 'k':
        arr[1][1] = 75;
        arr[2][1] = suitt;
        arr[7][6] = suitt;
        arr[7][7] = 75;
        arr[12][7] = suitt;
        arr[13][7] = 75;
        break;
    case 'A':
    case 'a':
        arr[1][1] = 65;
        arr[2][1] = suitt;
        arr[7][6] = suitt;
        arr[7][7] = 65;
        arr[12][7] = suitt;
        arr[13][7] = 65;
        break;
    }

}


int main()
{
    
    setlocale(LC_ALL, "ru");

    /*Написать функцию, выводящую на экран переданную ей игральную карту*/

    const int size = 15, size2 = 9;
    char arr[size][size2]{
        {47,61,61,61,61,61,61,61,92},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {124,32,32,32,32,32,32,32,124},
        {92,61,61,61,61,61,61,61,47}
    };


    
    char suit, card;

    cout << "Выберите масть (S - пики, H - червы, C - дрефы или крести, D - бубны): ";
    cin >> suit;
    cout << "Выберите масть ( 2,3,4,5,6,7,8,9,10,J,D,K,A): ";
    cin >> card;
    if (card == '10') {
        card = 1;
    }

    

    cards( arr, size, size2, card, suit);


    if (suit == 'S' || suit == 's' || suit == 'C' || suit == 'c') {
       
        SetColor(1, 7);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

    }
    if (suit == 'H' || suit == 'h' || suit == 'D' || suit == 'd') {
        SetColor(4, 7);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    SetColor(7, 0);
}
