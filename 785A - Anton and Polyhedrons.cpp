#include<stdio.h>
#include<string.h>

int n, face = 0;
char poly[12];

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", poly);
		if(!strcmp("Tetrahedron", poly))
			face+=4;
		if(!strcmp("Cube", poly))
			face+=6;
		if(!strcmp("Octahedron", poly))
			face+=8;
		if(!strcmp("Dodecahedron", poly))
			face+=12;
		if(!strcmp("Icosahedron", poly))
			face+=20;
	}
	printf("%d", face);
	return 0;
}
