#include "compara.h"
#include <cstring>



int compare_media(student s1, student s2)
{
	if (s1.media() > s2.media())
		return 1;
	else if (s1.media() == s2.media())
		return 0;
	else
		return -1;
}

int compare_math(student s1, student s2)
{
	if (s1.getmath() > s2.getmath())
		return 1;
	else if (s1.getmath() == s2.getmath())
		return 0;
	else
		return -1;
}
int compare_eng(student s1, student s2)
{
	if (s1.geteng() > s2.geteng())
		return 1;
	else if (s1.geteng() == s2.geteng())
		return 0;
	else
		return -1;
}
int compare_hist(student s1, student s2)
{
	if (s1.gethist() > s2.gethist())
		return 1;
	else if (s1.gethist() == s2.gethist())
		return 0;
	else
		return -1;
}
int compare_nume(student s1, student s2)
{
	int len = strlen(s1.getname()) < strlen(s2.getname()) ? strlen(s1.getname()) : strlen(s2.getname());
	for (int i = 0; i < len; i++)
	{
		if (s1.getname()[i] < s2.getname()[i])
			return -1;
		if (s1.getname()[i] > s2.getname()[i])
			return 1;
	}
	if (strlen(s1.getname()) < strlen(s2.getname()))
		return -1;
	if (strlen(s1.getname()) > strlen(s2.getname()))
		return 1;
	return 0;
}
