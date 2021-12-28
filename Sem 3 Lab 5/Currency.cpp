#include "Currency.h"

Dollar::Dollar() {
	value = 0;
}

Dollar::Dollar(double _value) {
	value = _value;
}

void Dollar::Convert() {
	value /= 0.013655; //На 29.12.2021 3:09
}

double Dollar::GetBack() {
	return value;
}

void Dollar::Print() {
	cout << value;
}



Euro::Euro() {
	value = 0;
}

Euro::Euro(double _value) {
	value = _value;
}

void Euro::Convert() {
	value /= 0.012057; //На 29.12.2021 3:09
}

double Euro::GetBack() {
	return value;
}

void Euro::Print() {
	cout << value;
}