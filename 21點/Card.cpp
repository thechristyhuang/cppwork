#include<iostream>
#include<cstdlib>
#include <time.h>
#include<iomanip>
#include "Card.h"
using namespace std;

int num[52];

int Card::Random_Card(int a) 
{
    a = a - 1;
    int r; 
    int i, j;
    srand(time(NULL));
    do{
    	r = rand() % 52 + 1;
        j = 0;
        for (i = 0; i < a; i++)
        {
            if (num[i] == r)
            {
                j = 1;
            }
        }
    } while (j); 
    num[a] = r;
    return num[a];
}

int Card::Card_Number(int a)
{
        int t;
        int q = 0;
        char r;
        t = Random_Card(a);
        if (t <= 13)
                q = t;
        else if (t <= 26)
                q = t - 13;
        else if (t <= 39)
                q = t - 26;
        else if (t <= 52)
                q = t - 39;
        if (q == 1) 
                r = q + 64;
        else if (q == 10)
                r = q + 74;
        else if (q == 11)
                r = q + 63;
        else if (q == 12)
                r = q + 69;
        else if (q == 13)
                r = q + 62;
        else
                r = q + 48;
        return r;
}

int Card::Card_Suit(int a)
{
        int s;
        int t;
        t = Random_Card(a);
        if (t <= 13)
                s = 1;
        else if (t <= 26)
                s = 2;
        else if (t <= 39)
                s = 3;
        else if (t <= 52)
                s = 4;
        return s;
}

int Card::Point(int a)
{
    char n;
    int point = 0;
    n = Card_Number(a);
    switch (n)
    {
        case 'A':point += 11; break;
        case '2':point += 2; break;
        case '3':point += 3; break;
        case '4':point += 4; break;
        case '5':point += 5; break;
        case '6':point += 6; break;
        case '7':point += 7; break;
        case '8':point += 8; break;
        case '9':point += 9; break;
        case 'T':point += 10; break;
        case 'J':point += 10; break;
        case 'Q':point += 10; break;
        case 'K':point += 10; break;
    }
    return point;
}

void Card::print(int a)
{	
    char n;
    int x;
    n= Card_Number(a);
    x=Card_Suit(a);
	cout << " " <<n;
	for(int j = 1;j <= 5; j++){
		cout <<"  "<<n;
	}
	cout << "\n";
	if(x == 1){
		cout<<setw(2)<<n<<"      *      "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"     ***     "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"    *****    "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"   *******   "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"   ** * **   "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"      *      "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"     ***     "<<setw(2)<<n<<endl;
	}else if(x == 2){
		cout<<setw(2)<<n<<"  **     **  "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"  ***   ***  "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"  **** ****  "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"   *******   "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"    *****    "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"     ***     "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"      *      "<<setw(2)<<n<<endl;
	}else if(x == 3){
		cout<<setw(2)<<n<<"      *      "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"     ***     "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"    *****    "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"   *******   "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"    *****    "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"     ***     "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"      *      "<<setw(2)<<n<<endl;
	}else if(x == 4){
		cout<<setw(2)<<n<<"      *      "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"     ***     "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"  ** *** **  "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<" ***** ***** "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"  **  *  **  "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"      *      "<<setw(2)<<n<<endl;
		cout<<setw(2)<<n<<"     ***     "<<setw(2)<<n<<endl;
	}
	cout << " " <<n;
	for(int j = 1;j <= 5; j++){
		cout <<"  "<<n;
	}
	cout << "\n";
}
