#include <admesh/stl.h>
#include <stdlib.h>
#include <string.h>

#define NAME "snapz"
#define VERSION "1"
#define INFO NAME " " VERSION "\n"
#define COPYRIGHT "Created by Miro Hrončok <miro@hroncok.cz>, WTFPL\n"
#define USAGE "Usage: " NAME " file.stl [output.stl]\n"

int main(int argc, char** argv) {
	int out;
	stl_file* s;
	
	if (argc == 2) {
		if (!strcmp(argv[1],"--help")) {
			printf(INFO COPYRIGHT USAGE);
			return EXIT_SUCCESS;
		}
		if (!strcmp(argv[1],"--version")) {
			printf(INFO);
			return EXIT_SUCCESS;
		}
		out = 1;
	} else if (argc == 3) {
		out = 2;
	} else {
		printf(USAGE);
		return EXIT_FAILURE;
	}
	
	s = (stl_file*)malloc(sizeof(stl_file));
	memset(s,0,sizeof(stl_file));
	stl_open(s,argv[1]);
	stl_translate(s, s->stats.min.x, s->stats.min.y, 0.0);
	stl_write_binary(s, argv[out], "snapzed");
	stl_close(s);
	free(s);
	return EXIT_SUCCESS;
}

