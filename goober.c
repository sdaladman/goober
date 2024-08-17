#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int r;

void img(char flag){
	
	if (flag == 'd'){
		printf(" 0\n  O\n   o\n     ____\n    (    )\n    |----|\n   _|    |_\n  / |____| \\\n  \\________/\n    /X-x\\\n    \\___/\n      |\n     /|\\\n    / | \\\n   /  |  \\\n      |\n     / \\\n    /   \\\n   /     \\\n");
	}

	else if (flag == 'c'){
		printf(" 0\n  O\n   o\n     ____\n    (    )\n    |----|\n   _|    |_\n  / |____| \\\n  \\________/\n    /.O.\\\n   /\\___/\n   \\  |\n    \\/|\\\n      | \\\n      |  \\\n      |\n     / \\\n    /   \\\n   /     \\\n");
	}

	else if (flag == 'e'){
		printf(" 0\n  O\n   o\n     ____\n    (    )\n    |----|\n   _|    |_\n  / |____| \\\n  \\________/\n    /@U@\\\n   \\\\___//\n    \\ | /\n     \\|/\n      |\n      |  \n      |\n     / \\\n    /   \\\n   /     \\\n");
	}

	else if (flag == 's'){
		printf(" 0\n  O\n   o\n     ____\n    (    )\n    |----|\n   _|    |_\n  / |____| \\\n  \\________/\n    /O_o\\\n    \\___/\n      |\n     /|\\\n    / | \\\n   /  |  \\\n      |\n     / \\\n    /   \\\n   /     \\\n");
	}
}

void randascii(){

	r = rand() % 4;

	if (r == 1){
		img('d');
	}

	else if (r == 2){
		img('c');
	}

	else if (r == 3){
		img('e');
	}

	else{
		img('s');
	}
}

int main(int argc, char *argv[]){
	char *input = argv[2];
	char string[100] = "";
	srand(time(NULL));
	if (argc > 2){
		for (int i = 2; i <= argc - 1; i++){
			strcat(string, argv[i]);
			if ( i != argc - 1){
				strcat(string, " ");
			}
			else{
			}

		}
			
	}

	if (argc > 2){
		printf("<%s>\n", string);
	}
	else if (argc <= 2){
		r = rand() % 10;
		
		if (r == 0){
			printf("<It was the best of times, it was the worst of times.>\n", r); 
		}
		else if (r == 1){
			printf("<i love sdaladmen>\n");
		}

		else if (r == 2){
			printf("<artix is better>\n");
		}

		else if (r == 3){
			printf("<I don't even know at this point.>\n");
		}

		else if (r == 4){
			printf("<install gentoo>\n");
		}

		else if (r == 5){
			printf("<i use arch btw.>\n");
		}

		else if (r == 6){
			printf("<Pro Tip: Search up 'Nestea' by Jogeir Liljedahl. It's an actual banger.>\n");
		}

		else if (r == 7){
			printf("<wifi drivers are bloat>\n");
		}
		
		else if (r == 8){
			printf("<Pro Tip: use searx. It's way better than google.>\n");
		}

		else{
			printf("<dwm is the goat>\n");
		}

	
	}

	else{
		printf("<%s>\n", input);
	}

	if (argc ==1){
		randascii();
	}


	else if (strcmp(argv[1], "-s") == 0){
		img('s');
	}

	else if (strcmp(argv[1], "-d") == 0){
		img('d');
	}

	else if (strcmp(argv[1], "-c") == 0){
		img('c');
	}
	else if (strcmp(argv[1], "-e") == 0){
		img('e');
	}

	else if (strcmp(argv[1], "-r") == 0){
		randascii();
	}

	else{
		
		randascii();	
	}
	return 0;
}

