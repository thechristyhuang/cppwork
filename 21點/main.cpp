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
				cout << "�A���쪺�P�O" <<endl;
				a.print(i);
				cout << "�X�p���I�ƬO" << point <<endl;
				do{
					cout << "�O�_�n�A�n�P�H(y/n)" << endl;
					cin >> yn;
					if (yn == 'y' || yn == 'Y')
					{
						a.print(i+1);
						point += a.Point(i + 1);
						if (a.Card_Number(i+1)  == 65) A++;
						while (point > 21 && A > 0)
						{
							//cout << "����"<<endl;
							point -= 10;
							A--;
						}
						cout << "�X�p���I�ƬO"<< point <<endl;
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
				    cout << "�o�����I�ƬO"<< point <<endl<<endl;
				    sum += point;
				   i++;
			    }else  if(point > 21){
				    cout<<"�z�o�I"<<endl;
				    point=0;
				    cout << "�o�����I�ƬO"<< point <<endl<<endl;
				    sum += point;
				   i++;
		        }
            }
            cout<< "�����I���`�X��" << sum <<endl;
            s = sum/5;
            cout<< "�������Ƭ�" << s<<endl<<endl; 
        }
    }
	return 0;
}
