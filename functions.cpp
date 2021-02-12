

#include "functions.h"




int count_non_space(string line){
	int count = 0;
	for (int i = 0; line.length(); i++){
	 if (line[i] != ' '){
		count++;
	 }
	}
	return count;
}




void display_file(fstream &fin) {

	string line;	
	int count_letter = 0;
	while (getline(fin, line)) {

		count_letter = count_non_space(line);

		cout << line << " [" << count_letter << " letters]" << endl;
	}

}





