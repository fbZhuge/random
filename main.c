#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <SDL2/SDL.h>
#include <time.h>

int main(int argc, char* argv[]){
		FILE *my_file;
		my_file = fopen ("numbers.csv", "w");
		srand(time(0));
        for (int i = 0; i<5000; i++) {
				float number = (float)rand()/RAND_MAX;
				fprintf(my_file, "%f\n", number);
        }
		fclose(my_file);
		return 0;
}
