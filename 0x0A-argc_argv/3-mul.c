#include <stdio.h>

int main(int argc, char *argv[])
{
if (argc <= 2)
{
printf("%s\n", "Error");
}return (1);
else
printf("%d\n", (atoi(argv[argc - 1]) * atoi(argv[argc - 2])));
return (0);
}