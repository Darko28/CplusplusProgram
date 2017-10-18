#include <stdio.h>


struct SensorNumber {
		char num1;
		char num2;
};


int sensorDataConvertToDecimal(char a) {
		switch(a) {
				case '0':
						return 0;
				case '1':
						return 1;
				case '2':
						return 2;
				case '3':
						return 3;
				case '4':
						return 4;
				case '5':
						return 5;
				case '6':
						return 6;
				case '7':
						return 7;
				case '8':
						return 8;
				case '9':
						return 9;
				case 'a':
						return 10;
				case 'b':
						return 11;
				case 'c':
						return 12;
				case 'd':
						return 13;
				case 'e':
						return 14;
				case 'f':
						return 15;
				default:
						return -1;
		}
};

int sensorDataConvertToDecimal1(char a) {
		if (a >= '0' && a <= '9') {
				return a - '0';
		} else if (a >= 'a' && a <= 'f') {
				return (a - 'a' + 10);
		}
		return -1;
}





int sensorDataInDecimal(char a, char b) {
		int an = sensorDataConvertToDecimal(a);
		int bn = sensorDataConvertToDecimal(b);
		return an * 16 + bn;
};



float sensorDataConvertion(int a, int b) {
		float result;
		result = ((b * 256) + a) / 10;
		return result;
};

int main()
{
		FILE *fpSrc, *fpDest;
		fpSrc = fopen("minicomSensorFile1.txt", "r");
		if (fpSrc == NULL) {
				printf("source file open failure.");
				return 0;
		}

		fpDest = fopen("minicomSensorConvertionFile.txt", "w");
		if (fpDest == NULL) {
				printf("dest file open failure.");
		}

		struct SensorNumber sensorNum[40];
		for (int i=0; i<20; i++) {
				sensorNum[i].num1 = fgetc(fpSrc);
				sensorNum[i].num2 = fgetc(fpSrc);
		}

		for (int i=0; i<20; i++) {
				printf("%c", sensorNum[i].num1);
				printf("%c", sensorNum[i].num2);
		}
		printf("\n");


		fseek(fpSrc, 0, SEEK_SET);
		for(int i=0; i<20; i++) {
			
				sensorNum[i].num1 = fgetc(fpSrc);
				sensorNum[i].num2 = fgetc(fpSrc);
				if (sensorNum[i].num1 == ' ') {
						sensorNum[i].num1 = sensorNum[i].num2;
						sensorNum[i].num2 = fgetc(fpSrc);
				}
		}


		for (int i=0; i<20; i++) {
				printf("%c", sensorNum[i].num1);
				printf("%c ", sensorNum[i].num2);
		}
		printf("\n");

		for (int i=0; i<20; i++) {
				printf("%x", sensorNum[i].num1);
				printf("%x ", sensorNum[i].num2);
		}
		printf("\n");

		for (int i=0; i<20; i++) {
				printf("%d ", sensorDataInDecimal(sensorNum[i].num1, sensorNum[i].num2));
		}
		printf("\n");

		for (int i=0; i<40; i=i+2) {
				printf("%c%c ", sensorNum[i].num1, sensorNum[i].num2);
		}
		printf("\n");

		fclose(fpSrc);
		fclose(fpDest);

		return 0;
}
