// simple redirection of the vim command to the nvim command
// By Skate :P
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{	
	
	if (argc == 1) {
		system("nvim");
		return 1;
	}

	char str[100] = "nvim ";

	//adds the args to the string (tookn me a min to realise that the vim command is a arg hence the -1 in the for loop)
	for (int i = 0; i < argc -1; i++) {
		
		strcat(str, argv[i + 1]);
		strcat(str, " ");
	}
	
	system(str);

	return 1;
}
