#include <stdio.h>
int main()
{
	float E,m,c;
	printf("Masukan nilai massa (Kg) : ");
	scanf("%f",&m);
	c=299792458;
	E=m*c;
	printf("Nilai Energi adalah %f Joule",E);
}
