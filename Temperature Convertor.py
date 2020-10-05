#include <stdio.h>
float temp_f;     /* degrees fahrenheit */
float temp_c;     /* degrees centigrade */
char line_text[50];        /* a line of input */

int main() {
	printf("Input a temperature (in Centigrade): ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f", &temp_c);

	temp_f = ((9.0 / 5.0) * temp_c) + 32.0;
	printf("%f degrees Fahrenheit.\n", temp_f);

	return(0);
}
