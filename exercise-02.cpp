/*Strukdat-09
Nama: Rio Sapta Samudera
NPM : 140810180030
Desc: Case2
*/

#include "pch.h"
#include <iostream>
using namespace std;

struct Stack {
	char isi;
	Stack* next;
};

typedef Stack* pointer;
typedef pointer S;

void createStack(S& Top) {
	Top = NULL;
}

void createElement(pointer& pBaru) {
	pBaru = new Stack;
	cin >> pBaru->isi;
	pBaru->next = NULL;
}

void push(S& Top, pointer pBaru) {
	if (Top == NULL) {
		Top = pBaru;
	}
	else {
		pBaru->next = Top;
		Top = pBaru;
	}
}

void traversal(S Top) {
	pointer pBantu;
	if (Top == NULL) {
		cout << "List Kosong";
	}
	else {
		pBantu = Top;
		do {
			cout << pBantu->isi << " ";
			pBantu = pBantu->next;
		} while (pBantu != NULL);
	}
	cout << endl;
}

int main() {
	pointer p;
	S s;
	int n;

	createStack(s);

	cout << "Jumlah huruf : "; cin >> n;
	cout << "Masukan Kata : ";
	for (int i = 0; i < n; i++) {
		createElement(p);
		push(s, p);
	}
	traversal(s);
}