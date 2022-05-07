#include <string.h>
#include <stdio.h>
#include <ctype.h>
char* MOT_CH(int N, char* CH)
{
	/* Variables locales */
	int DANS_MOT; /* indicateur logique : */
	/* vrai si CH pointe � l'int�rieur d'un mot */
	DANS_MOT = 0;
	for (; N > 0 && *CH; CH++)
		if (isspace(*CH))
			DANS_MOT = 0;
		else
			if (!DANS_MOT)
			{
				DANS_MOT = 1;
				N--;
				CH--; /* Pour r�ajuster l'effet de l'incr�mentation */
			}
	return CH;
}
int main()
{
	int x;
	char* MOT_CH(int N, char* CH);
	char maChaine[] = "Programmation C avec Visual Studio 2017";
	printf("%p", MOT_CH(3, maChaine));
	scanf("%d", &x); return 0;
}