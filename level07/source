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

int main(int ac, char **av, char **env)
{
	void ptr[100];
	char buf[20];

	clear_argv(argv);
    clear_envp(env);

	bzero(ptr, 100);

	printf("----------------------------------------------------\n"\
	"  Welcome to wil's crappy number storage service!   \n"\
	"----------------------------------------------------\n"\
	" Commands:                                          \n"\
	"    store - store a number into the data storage    \n"\
	"    read  - read a number from the data storage     \n"\
	"    quit  - exit the program                        \n"\
	"----------------------------------------------------\n"\
	"   wil has reserved some storage :>                 \n"\
	"----------------------------------------------------\n"\
	"\n");
	while(42) 
	{
		printf("Input command: ");
		res = 1;
		fgets(buf, sizeof(buf), stdin);
		cmd[strlen(buf)-1] = '\0';

		if(!strncmp(buf, "store", 5))
			res = store_number(ptr);
		else if(!strncmp(buf, "read", 4))
			res = read_number(ptr);
		else if(!strncmp(buf, "quit", 4))
			break;
		if(res)
			printf(" Failed to do %s command\n", buf;
		else
			printf(" Completed %s command successfully\n", buf);

		memset(cmd, 0, sizeof(cmd));
	}
	if (buffer overflow detected)
		stack_chk_fail();
	return (0);
}

