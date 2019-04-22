#include <iostream>
#include <cstdlib>
#include <time.h>
#include<iomanip>
#include "Card.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Card a;
	char yn;
	int n=1;
	while(n!=EOF){
		float sum=0;
		float s=0;
			for(int i = 1;i<53;i++){
				for(int x=0;x<5;x++){
				int A=0,point=0;
				if (a.Card_Number(i) == 'A') A++;
				point = a.Point(i);
				cout << "礟琌" <<endl;
				a.print(i);
				cout << "璸翴计琌" << point <<endl;
				do{
					cout << "琌璶璶礟(y/n)" << endl;
					cin >> yn;
					if (yn == 'y' || yn == 'Y')
					{
						a.print(i+1);
						point += a.Point(i + 1);
						if (a.Card_Number(i+1)  == 65) A++;
						while (point > 21 && A > 0)
						{
							//cout << "Τ㈤"<<endl;
							point -= 10;
							A--;
						}
						cout << "璸翴计琌"<< point <<endl;
                        i++;
                    }else if (yn == 'n' || yn == 'N') break;
			        if(point > 21&&A==0){
			        	break;
			        }
			        if(point == 21){
			        	break;
					}
                } while (1);
                if(point <= 21){
				    cout << "硂初翴计琌"<< point <<endl<<endl;
				    sum += point;
				   i++;
			    }else  if(point > 21){
				    cout<<"脄舘"<<endl;
				    point=0;
				    cout << "硂初翴计琌"<< point <<endl<<endl;
				    sum += point;
				   i++;
		        }
            }
            cout<< "き初翴计羆" << sum <<endl;
            s = sum/5;
            cout<< "キАだ计" << s<<endl<<endl; 
        }
    }
	return 0;
}
