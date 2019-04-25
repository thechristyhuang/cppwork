#include <iostream> 
#include <fstream> 
#include <sstream> 
#include <string> 
#include <cstdlib> 
#include <vector> 
#include <iomanip> 
#include <conio.h> 
#include<windows.h>  
using namespace std; 

int main(int argc, char* argv[]) {
    for (int g = 1; g < argc; g++) {
        if (argc == 0){
            cout << "Input error!\n";
            return 1;
        }
        ifstream infile(argv[g]);
        if (!infile){
            cout << "Can not open file!\n";
            return 1;
        }
        vector< vector<char> > vec;
        string temp;
        while (getline(infile, temp)) {
            stringstream ss(temp);
            vector<char> row;
            char data;
            while (ss >> data) {
            row.push_back(data);
            }
            vec.push_back(row);
        }
        int len = vec.size();
        int row, column;
        int x, y;
        for (int i = 1; i < len; i++) {
            for (int j = 0; j < vec[i].size(); j++){
                if (vec[i][j] == '2'){
                    row = i;
                    column = j;
                }
                if (vec[i][j] == '0') {
                    x = i;
                    y = j;
                }
            }
        }
        int a = 0;
        while (a != 1){
            system("cls");
            for (int i = 1; i < len; i++){
                for (int j = 0; j < vec[i].size(); j++){
                    cout << vec[i][j];
                }
                cout << endl;
            }
            int c;
            c = getch();
            if (c == 224) {
                c = getch();
                switch (c) {
                    case 72:
                        if (vec[x - 1][y] != '/') {
                            if (vec[x - 1][y] == '-'){
                                vec[x][y] = '-';
                                vec[x - 1][y] = '0';
                                x--;
                            }
                            else if (vec[x - 1][y] == '1'){
                                if (vec[x - 2][y] == '/') {
                                    vec[x - 1][y] = '1';
                                    vec[x][y] = '0';
                                    x--;
                                } 
                                else if (vec[x - 2][y] == '-') {
                                    vec[x - 2][y] = '1'; 
                                    vec[x - 1][y] = '0'; 
                                    vec[x][y] = '-'; 
                                    x--; 
                                }
                                else if (vec[x - 2][y] = '2') {
                                    vec[x - 2][y] = '1'; 
                                    vec[x - 1][y] = '0'; 
                                    vec[x][y] = '-';
                                    x--;
                                }
                            }
                        }
                        break;
                    case 80:
                        if (vec[x][y] == '0' && vec[x + 1][y] != '/') {
                            if (vec[x + 1][y] == '-') {
                                vec[x][y] = '-'; 
                                vec[x + 1][y] = '0'; 
                                x++; 
                            }
                            else if (vec[x + 1][y] == '1') {
                                if (vec[x + 2][y] == '/') {
                                    vec[x + 1][y] = '1'; 
                                    vec[x][y] = '0'; 
                                    x++; 
                                } 
                                else if (vec[x + 2][y] == '-') { 
                                    vec[x + 2][y] = '1'; 
                                    vec[x + 1][y] = '0'; 
                                    vec[x][y] = '-'; 
                                    x++; 
                                }
                                else if (vec[x + 2][y] = '2') { 
                                    vec[x + 2][y] = '1'; 
                                    vec[x + 1][y] = '0'; 
                                    vec[x][y] = '-'; 
                                    x++; 
                                    a = 1; 
                                } 
                            } 
                        } 
                        break;
                    case 75:     
                        if (vec[x][y] == '0' && vec[x][y - 1] != '/') { 
                            if (vec[x][y - 1] == '-') { 
                                vec[x][y] = '-'; 
                                vec[x][y - 1] = '0'; 
                                y--; 
                            } 
                            else if (vec[x][y - 1] == '1') { 
                                if (vec[x][y - 2] == '/') { 
                                    vec[x][y - 1] = '1'; 
                                    vec[x][y] = '0'; 
                                    y--; 
                                } 
                                else if (vec[x][y - 2] == '-') { 
                                    vec[x][y - 2] = '1'; 
                                    vec[x][y - 1] = '0'; 
                                    vec[x][y] = '-'; 
                                    y--; 
                                } 
                                else if (vec[x][y - 2] = '2') { 
                                    vec[x][y - 2] = '1'; 
                                    vec[x][y - 1] = '0'; 
                                    vec[x][y] = '-'; 
                                    y--; 
                                    a = 1; 
                                } 
                            } 
                        } 
                        break; 
                    case 77:    
                        if (vec[x][y + 1] != '/') { 
                            if (vec[x][y + 1] == '-') { 
                                vec[x][y] = '-'; 
                                vec[x][y + 1] = '0'; 
                                y++; 
                            } 
                            else if (vec[x][y + 1] == '1') { 
                                if (vec[x][y + 2] == '-') { 
                                    vec[x][y + 2] = '1'; 
                                    vec[x][y + 1] = '0'; 
                                    vec[x][y] = '-'; 
                                    y++; 
                                } 
                                else if (vec[x][y + 2] == '2') { 
                                    vec[x][y + 2] = '1'; 
                                    vec[x][y + 1] = '0'; 
                                    vec[x][y] = '-'; 
                                    y++; 
                                    a = 1; 
                                    system("cls"); 
                                    for (int i = 1; i < len; i++) { 
                                        for (int j = 0; j < vec[i].size(); j++) { 
                                            cout << vec[i][j];                  
                                        } 
                                        cout << endl; 
                                    } 
                                } 
                            } 
                        } 
                        break; 
                    default:break; 
                } 
            } 
        } 
    } 
} 

