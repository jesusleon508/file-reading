

#include "functions.h"



int count_characters(string line){
    int count = 0;
    while(line[count] != '\0'){
        count++;
    }
    return count;
}

//int count_non_space(string line)

//int count_spaces(string line)



void display_file(fstream &fin) {

	string line;

	int character_count = 0;

	while (getline(fin, line)) {
		character_count = count_characters(line);
		cout << line << " [" << character_count << " chars]" << endl;
	}
}





