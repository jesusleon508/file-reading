

#include "main.h"

int main(int argc, char** argv) {


	fstream myfile;

	myfile.open(argv[1]);
	

	if (argc > 2)
                cout << "usage: a.out filename" << endl;
	
	else if(argc  == 1)
                cout << "usage: a.out filename" << endl;

	
	else if (myfile.is_open()){ 
		display_file(myfile);
		myfile.close();
	} else {
		cout << "invalid filename: badfile" << endl;
	}
	cout << endl;

	return 0;
}
      



		
