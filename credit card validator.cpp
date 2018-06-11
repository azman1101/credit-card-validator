#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int i, j, k, act, credit, credit1 , card[9], even=0, odd=0, evod;
	
	cout << "\n\tHow many credit cards : ";
	cin >> j;
	
	for (i=1; i<=j; i++){
		cout << "\n\n\n\tEnter the credit card number : ";
		cin >> credit;
		credit1 = credit;
		
		odd = 0;
		even = 0;
		
		for (k=1; k<=8; k++){
		card[k] = credit1 % 10;
		credit1 = credit1 / 10;
		
		if ((k%2)==1)
			odd = odd + card[k];
		if ((k%2)==0){
			card[k] = card[k] * 2;
			if (card[k]>9){
				even = even + (card[k]%10) + (card[k]/10);
			}
			else
				even = even + card[k];
			}
		}
		
		evod = (even + odd) % 10;
		
		if (evod==0)
			cout << "\n\tValid";
		else
			cout << "\n\tNot valid";
	}
}
