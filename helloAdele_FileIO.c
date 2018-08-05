// to compile & run, type: gcc -o helloAdele_FileIO helloAdele_FileIO.c && ./helloAdele_FileIO




#include <stdio.h>
#include <string.h>


	FILE *fp;
    char Playback[256] = "Playback.csd";
    void system();


int main()
{
	fp = fopen(Playback, "w");
   	if(fp != NULL)

   	{   	
		fprintf(fp,"<CsoundSynthesizer>\n");
		fprintf(fp,"<CsInstruments>\n");
		fprintf(fp,"instr testing\n");
		fprintf(fp," a1 diskin2 \"HelloAdele.wav\", p5\n");
		fprintf(fp," k1 linen 1, .2, p3, .3\n");
		fprintf(fp," out a1 * k1\n");
		fprintf(fp,"endin\n");
		fprintf(fp,"</CsInstruments>\n");
		fprintf(fp,"<CsScore>\n");
		fprintf(fp,"i \"testing\" 0 14 0 1 \n");
		fprintf(fp,"e 14\n");	
		fprintf(fp,"</CsScore>\n");
		fprintf(fp,"</CsoundSynthesizer>\n");	

		system("clear");
		printf("\n\t\t\tHello!\n");	
		}

		fclose(fp);

		char commandline [1000] = "csound -odac -d -O null ";
		strcat(commandline, Playback);
		system (commandline);		
			
		return 0;
}