void	secret_backdoor(void)
{
	char buf[128];

	buf = fgets(buf, 128, system);

	system(buf);
}

void	set_username(char *buf)
{
	char buf[]
	puts(">: Enter your username");
	printf(">>:");
	fgets(buf, 128, stdin);

	printf(">: Welcome, %s", buf);
}

void	set_msg(char *buf)
{
	int i = 0;
	char buf2[1024];
	while (i < 128)
	{
		buf2[i] = 0;
		i++;
	}
	puts(">: Msg @Unix-Dude");
	printf(">>:");
	fgets(buf2, 1024, stdin);
	strncpy(buf, buf2, buf[41]);

}

void	handle_msg()
{
	char buf[52];

	buf[0] = 0;
	buf[8] = 0;
	buf[16] = 0;
	buf[24] = 0;
	buf[32] = 0;
	buf[40] = 140;
	set_username(buf);
	set_msg(buf);
	puts(">: Msg sent!");
}

int main(int argc, char **argv)
{
	puts("--------------------------------------------\n|   ~Welcome to l33t-m$n ~    v1337        |\n--------------------------------------------");
	handle_msg();
	return (0);
}
