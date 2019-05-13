
int	ft_strindex(char *highstack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (highstack[i++])
	{
		j = 0;
		while (needle[j] == highstack[i] && highstack[i])
		{
			i++;
			if (needle[++j] == '\0')
				return (i - j);
		}
	}
	return (-1);
}
