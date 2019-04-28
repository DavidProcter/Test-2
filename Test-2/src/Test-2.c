/*
 ============================================================================
 Name        : Test-2.c
 Author      : David Procter
 Version     : 000
 Copyright   : Copyright - David Procter
 Description : Testing rotation decryption
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	//char textstring[1536] = "MON MOTHMA: THE DATA BROUGHT TO US BY THE BOTHAN SPIES PINPOINTS THE EXACT LOCATION OF THE EMPEROR'S NEW BATTLE STATION. WE ALSO KNOW THAT THE WEAPON SYSTEMS OF THIS DEATH STAR ARE NOT YET OPERATIONAL. WITH THE IMPERIAL FLEET SPREAD THROUGHOUT THE GALAXY IN A VAIN EFFORT TO ENGAGE US, IT IS RELATIVELY UNPROTECTED. BUT MOST IMPORTANT OF ALL, WE'VE LEARNED THAT THE EMPEROR HIMSELF IS PERSONALLY OVERSEEING THE FINAL STAGES OF THE CONSTRUCTION OF THIS DEATH STAR. MANY BOTHANS DIED TO BRING US THIS INFORMATION" ;

	//char textstring[1536] = "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU." ;
	char textstring[1536] = "SJSFMPCRM WG O USBWIG. PIH WT MCI XIRUS O TWGV PM WHG OPWZWHM HC QZWAP O HFSS, WH KWZZ ZWJS WHG KVCZS ZWTS PSZWSJWBU HVOH WH WG GHIDWR. - OZPSFH SWBGHSWB" ;
	//char textstring[1536] =

	char outputstring[1536];

	int b=0,c=0,e=65,f=0,g=0;
	int x=0,y=0;
	int key=0;

	strcpy(outputstring, textstring);

	for(int d=1 ; d<=26 ; d++ , e++){
		c=0;

		for (int a=0 ; textstring[a] != '\0' ; a++ ) {
			b=textstring[a];
			//printf("%d\n", b);

			if (b==e){
				c=c+1;


			}
			if (c>f){
				f=c;
				g=e;
			}
		}
	}

	key=g-73;

	if (key<0) key=key+26;

	printf("C variable: %d\n",c);
	printf("E variable: %d\n",e);
	printf("F variable: %d\n",f);
	printf("G variable: %d\n",g);
	printf("Key is: %d",key);


	for (int a=0 ; textstring[a] != '\0' ; a++ ) // Run a loop and encrypt the string.
		{
			x = textstring[a];
			if (x >= 65 && x <= 90) //Only encrypt the capital letters.
			{
				y=x-key;
				if (y<65) // Subtraction to keep the result within capital letters
				{
					y=y+26;
				}
				//printf("Value at index %d is: %d plus key value: %d\n", a, b, c); //Check the internal process
				outputstring[a]=y; // Change the value of the letter
			}
		}



		printf("\nDecrypted text: %s\n", outputstring); //Print the decrypted result


	return EXIT_SUCCESS;
}
