// Francisco J. Camacho Lotti
// March 20, 2022
// CS-210-T4449 Project 1 

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

// Convert function that takes in 12 hour format and converts to 24 hour format.
void display();
void stdToMlt();
void mltToStd();
void displayTime(int hour, int minutes, int seconds, string AMorPM);
void displayMltTime(int hour, int minutes, int seconds);

char getSelection;

// int hours, minutes, seconds, and string AM or PM.
int getHour();
int getMinutes();
int getSeconds();
string getAMorPM();

int main() {

	// start display.
	char choice = ' ';
	cout << "\t\tTime Conversion" << endl;

	display();

	// time format to be used.
	cout << "Enter a time in HH:MM:SS or AM/PM: ";

	switch (choice) {
	case 1:
		stdToMlt();
		break;

	case 2:
		mltToStd();
		break;
	}
	system("PAUSE");
	return 0;

	//  request time to be converted.
	void display() {
	cout << "Enter the time to be converted: ";
	cout << "1. 12-24 hour format?" << endl;
	cout << "or" << endl;
	cout << "2. 24-12 hour format?" << endl;
}

	// prompt user to enter the time.
	char getSelection(); {
		char choice;
		cin >> choice;
		return choice;
	}

	// get hour, minutes, seconds, and AM or PM to attach to each function for 12 to 24 hour format.
	void stdToMlt() {
		int hour;
		int minutes;
		int seconds;
		string AMorPM = " ";

		cout << "Time(Hour)"; hour = getHour();
		cout << "Time(Minutes)"; minutes = getMinutes();
		cout << "Time(Seconds)"; seconds = getSeconds();
		cout << "AM or PM?"; AMorPM = getAMorPM();

		// will display the given value and not an error.
		if (AMorPM == "PM" || AMorPM == "pm") {
			hour = (hour + 12);
		}
		displayMltTime(Hour, Minutes, Seconds);
	}

	// get hour, minutes, seconds, and AM or PM to attach to each function for 24 to 12 hour format .
	void mltToStd() {
		int hour;
		int minutes;
		int seconds;
		string AMorPM = " ";

		cout << "Time(Hour)"; hour = getHour();
		cout << "Time(Minutes)"; minutes = getMinutes();
		cout << "Time(Seconds)"; seconds = getSeconds();

		if (hour <= 12) {
			AMorPM = "AM";

		else if (hour > 12) {
			AMorPM = "PM";
			hour = hour % 12;
		}
		displayTime(hour, minutes, seconds, AMorPM);
		}

		int getHour() {
			int hour;
			cin >> hour;
			return hour;
		}

		int getMinutes() {
			int minutes;
			cin >> minutes;
			return minutes;
		}

		int getSeconds() {
			int seconds;
			cin >> seconds;
			return seconds;
		}

		char getSelection()
		{
			return 0;
		}

		string AMorPM() {
			string ampm;
			cin >> ampm;
			return ampm;
		}

		// display the std time.
		void displayTime(int hour, int minutes, int seconds, string AMorPM) {
			char zero = ' ';
			if (minutes < 10) {
				zero = '0';
			}
			// display results
			cout << endl << "Time: " << hour << ":" << zero << minutes << ":" << seconds << " " << AMorPM << endl;
		}

		// display the 24 hour format.
		void displayMltTime(int hour, int minutes, int seconds, string AmorPM) {
			char zero = ' ';
			char hourZero = ' ';

			if (hour < 10) {
				hourZero = '0';
			}

			if (minutes < 10) {
				zero = '0';
			}
			cout << endl << "Time: " << hourZero << hour << ":" << minutes << ":" << seconds << endl;

			return 0;
		}
