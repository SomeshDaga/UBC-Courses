#include "hashtable.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

#define TABLESIZE 1000
#define NUMOF

using namespace std;


void usage(char* argv[]) {
	cerr << "Usage: " << argv[0] << " scheme numberOfKeys sizeOfTable" << endl;
	exit(-1);
}

int main(int argc, char *argv[]) {
	int n, m;
	srand(time(0));



	if (argc == 1) {
		cout << "Running your test code..." << endl;
		/* ADD YOUR TEST CODE HERE */
		Hashtable H1(TABLESIZE);
		Hashtable H2(TABLESIZE);

		/*
		int i = 100;

		while (i < TABLESIZE) {

			for (int i = 0; i<1; ++i) {
				H1.linsert(rand() + 1);
			}
			//    H.print();
			cout << "Linear: ";
			H1.printStats();
		}
		*/

#ifdef _WIN32
		system("pause");
#endif
		return 0;
	}

	if (argc != 4) {
		usage(argv);
	}
	n = atoi(argv[2]);
	m = atoi(argv[3]);
	Hashtable H(m);

	switch (argv[1][0]) {
	case 'l':
		for (int i = 0; i<n; ++i) {
			H.linsert(rand() + 1);
		}
		//    H.print();
		cout << "Linear: ";
		H.printStats();
		break;
	case 'q':
		for (int i = 0; i<n; ++i) {
			H.qinsert(rand() + 1);
		}
		//    H.print();
		cout << "Quadratic: ";
		H.printStats();
		break;
	case 'd':
		for (int i = 0; i<n; ++i) {
			H.dinsert(rand() + 1);
		}
		//    H.print();
		cout << "Double Hashing: ";
		H.printStats();
		break;
	default:
		usage(argv);
	}
#ifdef _WIN32
	system("pause");
#endif
}
