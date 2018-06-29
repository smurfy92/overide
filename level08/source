void        log_wrapper(FILE *file, char *str, char *argv)
{
	char buf[255];

	strcpy(buf, str);
	snprintf(buf + strlen(buf), 255 - strlen(buf) - 1, argv);
	buf[strcspn(buf, "\n")] = '\0';
	fprintf(file, "LOG: %s\n", buf);

	if (buffer overflow detected)
		__stack_chk_fail();
}

int main(int argc, char **argv)
{
	char str[100] = "./backups/"

		if (argc != 2)
			printf("Usage: %s filename\n", argv[0]);
	FILE *file = fopen("./backups/.log", "w");

	if (file == NULL)
	{
		printf("ERROR: Failed to open %s\n", "./backups/.log");
		exit(1);
	}

	log_wrapper(file, "Starting back up: ", argv[1]);
	FILE *file2 = fopen(argv[1], "r");
	if (file2 == NULL)
	{
		printf("ERROR: Failed to open %s\n", argv[1]);
		exit(1);
	}
	strncat(str, argv[1], 99);
	int ret = open(str, 0xc1);
	if (ret != 0)
	{
		printf("ERROR: Failed to open %s%s\n", "./backups/", argv[1]);
		exit(1);
	}
	while ((char c = fgetc(file2)) != EOF)
		write(str, c, 1);
	log_wrapper(file, "Finished back up ", argv[1]);
	fclose(file);
	close(str);
	if (buffer overflow detected)
		__stack_chk_fail();
	return (0);
}
