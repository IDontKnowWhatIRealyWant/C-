#include <iostream>
using namespace std;

/*     #
 *    ###
 *   #####
 *  #######
 * #########
 */

/* g++ -Wall Pyramide.cpp -o Pyramide.exe */

int main (int argc, char *argv[]){

	int height = 0;

	cout << "Rentrez la taille de la pyramide" << endl;
	cin >> height;
	cout << "La taille vaut " << height << endl;

	for (int i = 0; i < height; i++) {
		if (i == 0) {
			for (int j = 0; j < height; j++) {
				cout << " ";
			}	
			cout << "#" << endl;	
		}
		else {
			for (int j = 0; j < height-i; j++) {
				cout << " ";
			}
			for (int j = 0; j < (2*i+1); j++) {
				cout << "#";
			}	
			cout << endl;
		}
	}

	return 0;
}
