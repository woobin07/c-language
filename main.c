#include <stdio.h>

int main() {

	float height = 177
	float weight = 82
	float bmi =0;
	height = height * 0.01; //cm
	bmi = weight / (height * height);
	printf ("당신의 BMI : %.2f\n", bmi);
	return 0;
	
}
