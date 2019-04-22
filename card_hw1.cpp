#include<iostream>
#include <iomanip>
using namespace std;

int menu(void)
{
	int choice;
	
	do{
		cout <<"Please select your card suit."<<endl;
	    cout <<"1. Spade" << endl;
	    cout <<"2. Heart" << endl;
	    cout <<"3. Diamond" << endl;
	    cout <<"4. Club" << endl;
	    cin >> choice;
	}while(choice<1||choice>4);
	return choice;
}

int main(void)
{
	int selection, i, j, cardnum;
	
	do{
		selection = menu();
		cout <<"Please select your card number.";
		cin >> cardnum;
		cout << endl;
		
		if(cardnum<10){
			cout <<" " <<cardnum;
			for(j = 1;j <= 5; j++){
				cout <<"  "<<cardnum;
			}
			cout << "\n";
		}else{
			cout <<cardnum;
			for(j = 1;j <= 5; j++){
				cout << " "<<cardnum;
			}
			cout << "\n";
		}
		
		if(selection == 1){
			cout<<setw(2)<<cardnum<<"      *      "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"     ***     "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"    *****    "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"   *******   "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"   ** * **   "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"      *      "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"     ***     "<<setw(2)<<cardnum<<endl;
		}else if(selection == 2){
			cout<<setw(2)<<cardnum<<"  **     **  "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"  ***   ***  "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"  **** ****  "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"   *******   "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"    *****    "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"     ***     "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"      *      "<<setw(2)<<cardnum<<endl;
		}else if(selection == 3){
			cout<<setw(2)<<cardnum<<"      *      "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"     ***     "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"    *****    "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"   *******   "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"    *****    "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"     ***     "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"      *      "<<setw(2)<<cardnum<<endl;
		}else if(selection == 4){
			cout<<setw(2)<<cardnum<<"      *      "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"     ***     "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"  ** *** **  "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<" ***** ***** "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"  **  *  **  "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"      *      "<<setw(2)<<cardnum<<endl;
			cout<<setw(2)<<cardnum<<"     ***     "<<setw(2)<<cardnum<<endl;
		}
		
		if(cardnum<10){
			cout <<" " <<cardnum;
			for(j = 1;j <= 5; j++){
				cout <<"  "<<cardnum;
			}
			cout << "\n";
		}else{
			cout <<cardnum;
			for(j = 1;j <= 5; j++){
				cout << " "<<cardnum;
			}
			cout << "\n";
		}
	
    }while(cardnum<=13);
    
	return 0;
} 

