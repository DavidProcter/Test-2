/*
 ============================================================================
 Name        : Test-2.c
 Author      : David Procter
 Version     : 001
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

	char outputstring1[1536];
	char outputstring2[1536];
	char outputstring3[1536];
	char outputstring4[1536];

	int b=0,c=0,e=65,f=0,g=0;
	int x=0,y=0;
	int key=0;		//Key is the final key to use
	int key1=69; 	//key1 is 69 (ASCII for 'E')
	int key2=84; 	//key2 is 84 (ASCII for 'T')
	int key3=73; 	//key3 is 73 (ASCII for 'I')
	int key4=83; 	//key4 is 83 (ASCII for 'S')

	strcpy(outputstring1, textstring);
	strcpy(outputstring2, textstring);
	strcpy(outputstring3, textstring);
	strcpy(outputstring4, textstring);

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
	key1=g-key1;	//-69;
		if (key1<0) key1=key1+26;
	key2=g-key2;	//-84;
		if (key2<0) key2=key2+26;
	key3=g-key3;	//-73;
		if (key3<0) key3=key3+26;
	key4=g-key4;	//-83;
		if (key4<0) key4=key4+26;

	printf("C variable: %d\n",c);
	printf("E variable: %d\n",e);
	printf("F variable: %d\n",f);
	printf("G variable: %d\n",g);
	printf("Key is: %d",key);

	for (int a=0 ; textstring[a] != '\0' ; a++ ) // Run a loop and decrypt the string.
		{
			x = textstring[a];
			if (x >= 65 && x <= 90) //Only decrypt the capital letters.
			{
				y=x-key1;
				if (y<65) // Subtraction to keep the result within capital letters
				{
					y=y+26;
				}
				//printf("Value at index %d is: %d plus key value: %d\n", a, b, c); //Check the internal process
				outputstring1[a]=y; // Change the value of the letter
			}
		}

	y=0;
	for (int a=0 ; textstring[a] != '\0' ; a++ ) // Run a loop and decrypt the string.
		{
			x = textstring[a];
			if (x >= 65 && x <= 90) //Only decrypt the capital letters.
			{
				y=x-key2;
				if (y<65) // Subtraction to keep the result within capital letters
				{
					y=y+26;
				}
				//printf("Value at index %d is: %d plus key value: %d\n", a, b, c); //Check the internal process
				outputstring2[a]=y; // Change the value of the letter
			}
		}

	y=0;
	for (int a=0 ; textstring[a] != '\0' ; a++ ) // Run a loop and decrypt the string.
		{
			x = textstring[a];
			if (x >= 65 && x <= 90) //Only decrypt the capital letters.
			{
				y=x-key3;
				if (y<65) // Subtraction to keep the result within capital letters
				{
					y=y+26;
				}
				//printf("Value at index %d is: %d plus key value: %d\n", a, b, c); //Check the internal process
				outputstring3[a]=y; // Change the value of the letter
			}
		}

	y=0;
	for (int a=0 ; textstring[a] != '\0' ; a++ ) // Run a loop and decrypt the string.
		{
			x = textstring[a];
			if (x >= 65 && x <= 90) //Only decrypt the capital letters.
			{
				y=x-key4;
				if (y<65) // Subtraction to keep the result within capital letters
				{
					y=y+26;
				}
				//printf("Value at index %d is: %d plus key value: %d\n", a, b, c); //Check the internal process
				outputstring4[a]=y; // Change the value of the letter
			}
		}


		printf("\nDecrypted text (E) 1: %s\n", outputstring1); //Print the decrypted result
		printf("\nDecrypted text (T) 2: %s\n", outputstring2); //Print the decrypted result
		printf("\nDecrypted text (I) 3: %s\n", outputstring3); //Print the decrypted result
		printf("\nDecrypted text (S) 4: %s\n", outputstring4); //Print the decrypted result


	return EXIT_SUCCESS;
}
