//============================================================================
// Name        : Doc_so.cpp
// Author      : Ng-Hieu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long int n;
	cin >> n;
	int t[9];
	bool b7 = false, b4 = false, b1 = false;
	bool a = false, b = false, c = false;

	if (n < 0) {
		cout << "negative" << ' ';
		n = -n;
	}

	t[8] = n / 100000000;
	t[7] = (n / 10000000) % 10;
	t[6] = (n / 1000000) % 10;
	t[5] = (n / 100000) % 10;
	t[4] = (n / 10000) % 10;
	t[3] = (n / 1000) % 10;
	t[2] = (n / 100) % 10;
	t[1] = (n / 10) % 10;
	t[0] = (n / 1) % 10;

//	for (int i = 0; i < 9; i++) {
//		cout << "t[" << i << "]: " << t[i] << endl;
//	}

	if (t[8] != 0) {
		switch (t[8]) {
		case 1:
			cout << "one" << ' ';
			break;
		case 2:
			cout << "two" << ' ';
			break;
		case 3:
			cout << "three" << ' ';
			break;
		case 4:
			cout << "four" << ' ';
			break;
		case 5:
			cout << "five" << ' ';
			break;
		case 6:
			cout << "six" << ' ';
			break;
		case 7:
			cout << "seven" << ' ';
			break;
		case 8:
			cout << "eight" << ' ';
			break;
		case 9:
			cout << "nine" << ' ';
			break;
		}
		cout << "hundred" << ' ';
		a = true;
	}

	if (t[7] != 0) {
		if (t[7] > 1) {
			switch (t[7]) {
			case 2:
				cout << "twenty-";
				break;
			case 3:
				cout << "thirty-";
				break;
			case 4:
				cout << "forty-";
				break;
			case 5:
				cout << "fifty-";
				break;
			case 6:
				cout << "sixty-";
				break;
			case 7:
				cout << "seventy-";
				break;
			case 8:
				cout << "eighty-";
				break;
			case 9:
				cout << "ninety-";
				break;
			}

		} else {

			int chuc = 10 + t[6];
			b7 = true;

			switch (chuc) {
			case 10:
				cout << "ten" << ' ';
				break;
			case 11:
				cout << "eleven" << ' ';
				break;
			case 12:
				cout << "twelve" << ' ';
				break;
			case 13:
				cout << "thirteen" << ' ';
				break;
			case 14:
				cout << "fourteen" << ' ';
				break;
			case 15:
				cout << "fifteen" << ' ';
				break;
			case 16:
				cout << "sixteen" << ' ';
				break;
			case 17:
				cout << "seventeen" << ' ';
				break;
			case 18:
				cout << "eighteen" << ' ';
				break;
			case 19:
				cout << "nineteen" << ' ';
				break;
			}

		}
		a = true;
	}

	if (b7 == false) {
		if (t[6] != 0) {
			switch (t[6]) {
			case 1:
				cout << "one" << ' ';
				break;
			case 2:
				cout << "two" << ' ';
				break;
			case 3:
				cout << "three" << ' ';
				break;
			case 4:
				cout << "four" << ' ';
				break;
			case 5:
				cout << "five" << ' ';
				break;
			case 6:
				cout << "six" << ' ';
				break;
			case 7:
				cout << "seven" << ' ';
				break;
			case 8:
				cout << "eight" << ' ';
				break;
			case 9:
				cout << "nine" << ' ';
				break;
			}
			a = true;
		}
	}

	if (a == true) {
		cout << "million" << ' ';
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if (t[5] != 0) {
		switch (t[5]) {
		case 1:
			cout << "one" << ' ';
			break;
		case 2:
			cout << "two" << ' ';
			break;
		case 3:
			cout << "three" << ' ';
			break;
		case 4:
			cout << "four" << ' ';
			break;
		case 5:
			cout << "five" << ' ';
			break;
		case 6:
			cout << "six" << ' ';
			break;
		case 7:
			cout << "seven" << ' ';
			break;
		case 8:
			cout << "eight" << ' ';
			break;
		case 9:
			cout << "nine" << ' ';
			break;
		}
		cout << "hundred" << ' ';
		b = true;
	}

	if (t[4] != 0) {
		if (t[4] > 1) {
			switch (t[4]) {
			case 2:
				cout << "twenty-";
				break;
			case 3:
				cout << "thirty-";
				break;
			case 4:
				cout << "forty-";
				break;
			case 5:
				cout << "fifty-";
				break;
			case 6:
				cout << "sixty-";
				break;
			case 7:
				cout << "seventy-";
				break;
			case 8:
				cout << "eighty-";
				break;
			case 9:
				cout << "ninety-";
				break;
			}

		} else {

			int chuc = 10 + t[3];
			b4 = true;

			switch (chuc) {
			case 10:
				cout << "ten" << ' ';
				break;
			case 11:
				cout << "eleven" << ' ';
				break;
			case 12:
				cout << "twelve" << ' ';
				break;
			case 13:
				cout << "thirteen" << ' ';
				break;
			case 14:
				cout << "fourteen" << ' ';
				break;
			case 15:
				cout << "fifteen" << ' ';
				break;
			case 16:
				cout << "sixteen" << ' ';
				break;
			case 17:
				cout << "seventeen" << ' ';
				break;
			case 18:
				cout << "eighteen" << ' ';
				break;
			case 19:
				cout << "nineteen" << ' ';
				break;
			}

		}
		b = true;
	}

	if (b4 == false) {
		if (t[3] != 0) {
			switch (t[3]) {
			case 1:
				cout << "one" << ' ';
				break;
			case 2:
				cout << "two" << ' ';
				break;
			case 3:
				cout << "three" << ' ';
				break;
			case 4:
				cout << "four" << ' ';
				break;
			case 5:
				cout << "five" << ' ';
				break;
			case 6:
				cout << "six" << ' ';
				break;
			case 7:
				cout << "seven" << ' ';
				break;
			case 8:
				cout << "eight" << ' ';
				break;
			case 9:
				cout << "nine" << ' ';
				break;
			}
			b = true;
		}

	}
	if (b == true) {
		cout << "thousand" << ' ';
	}

	//////////////////////////////////////////////////////////////////2222222222222222222222222222222

	if (t[2] != 0) {
		switch (t[2]) {
		case 1:
			cout << "one" << ' ';
			break;
		case 2:
			cout << "two" << ' ';
			break;
		case 3:
			cout << "three" << ' ';
			break;
		case 4:
			cout << "four" << ' ';
			break;
		case 5:
			cout << "five" << ' ';
			break;
		case 6:
			cout << "six" << ' ';
			break;
		case 7:
			cout << "seven" << ' ';
			break;
		case 8:
			cout << "eight" << ' ';
			break;
		case 9:
			cout << "nine" << ' ';
			break;
		}
		cout << "hundred" << ' ';
	}

	if (t[1] != 0) {
		if (t[1] > 1) {
			switch (t[1]) {
			case 2:
				cout << "twenty-";
				break;
			case 3:
				cout << "thirty-";
				break;
			case 4:
				cout << "forty-";
				break;
			case 5:
				cout << "fifty-";
				break;
			case 6:
				cout << "sixty-";
				break;
			case 7:
				cout << "seventy-";
				break;
			case 8:
				cout << "eighty-";
				break;
			case 9:
				cout << "ninety-";
				break;
			}

		} else {

			int chuc = 10 + t[0];
			b1 = true;

			switch (chuc) {
			case 10:
				cout << "ten" << ' ';
				break;
			case 11:
				cout << "eleven" << ' ';
				break;
			case 12:
				cout << "twelve" << ' ';
				break;
			case 13:
				cout << "thirteen" << ' ';
				break;
			case 14:
				cout << "fourteen" << ' ';
				break;
			case 15:
				cout << "fifteen" << ' ';
				break;
			case 16:
				cout << "sixteen" << ' ';
				break;
			case 17:
				cout << "seventeen" << ' ';
				break;
			case 18:
				cout << "eighteen" << ' ';
				break;
			case 19:
				cout << "nineteen" << ' ';
				break;
			}

		}
	}

	if (b1 == false) {
		if (t[0] != 0) {
			switch (t[0]) {
			case 1:
				cout << "one" << ' ';
				break;
			case 2:
				cout << "two" << ' ';
				break;
			case 3:
				cout << "three" << ' ';
				break;
			case 4:
				cout << "four" << ' ';
				break;
			case 5:
				cout << "five" << ' ';
				break;
			case 6:
				cout << "six" << ' ';
				break;
			case 7:
				cout << "seven" << ' ';
				break;
			case 8:
				cout << "eight" << ' ';
				break;
			case 9:
				cout << "nine" << ' ';
				break;
			}
		}
	}

	return 0;
}
