/*
	sort an array of structures
	create the structures with day (string) and temperature (float) members
	ordenar el array por temperaturas, con las días más fríos primero
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand((unsigned int)time(0));
	
	struct weather {
		char day[10];
		float temp;
	};
	struct weather week[7] = {
		{ "Sunday", rand() % 21/100 + 60},
		{ "Monday", rand() % 21 + 60 },
		{ "Tuesday", rand() % 21 + 60 },
		{ "Wednesday", rand() % 21 + 60 },
		{ "Thursday", rand() % 21 + 60 },
		{ "Friday", rand() % 21 + 60 },
		{ "Saturday", rand() % 21 + 60 }
	};
	
	struct weather tempo;							// struct temporal
	
	for(int i = 0; i < 7; i++){
		for(int j = i + 1; j < 7; j++){
			if(week[i].temp > week[j].temp){
				tempo = week[j];
				week[j] = week[i];
				week[i] = tempo;
			}
		}
	}

	int x;
	puts("This week's forecast:");
	for(x=0;x<7;x++)
		printf("%10s %.1f degrees\n",
				week[x].day,
				week[x].temp);
	
	return(0);
}