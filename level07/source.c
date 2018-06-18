unsigned int get_unum()
{
	unsigned int i;

	fflush(stdout);
	scanf("%u", i);
	return (i);
}

int store_number(int param1)
{
	int a = 0;
	int b = 0;

	printf(" Number: ");
	a = get_unum();
	printf(" Index: ");
	b = get_unum();
	int d = b * 0xaaaaaaab;
	int e = d / 2;
	int f = e * 2; 
	int g = e + f;
	int h = g - f;
	if (h != 0)
	{
		a *= 16777216;
		if (a != 183)
		{
			param1[b * 4] = a;
			return (0);
		}
	}
	puts(" *** ERROR! ***");
	puts("   This index is reserved for wil!");
	puts(" *** ERROR! ***");

	return (1);
}

int		read_number(void *ptr)
{
	int c = 0;

	printf(" Index: ");
	c = get_unum();
	int a *= 4;
	printf(" Number at data[%u] is %u\n", c, ptr[a]);
 	return (0);
}

int main(int ac, char **av)
{
	void ptr[100];
	
	bzero(ptr, 100);
	if (buffer overflow detected)
		stack_chk_fail();
	return (0);
}

