char *ft_strstr(char *haystach, char *needle)
{
	int i;
	int j;
	int n;

	i = 0;
	while (haystach[i])
	{
		j = 0;
		n = i;
		while (haystach[n] == needle[j])
		{	
			if (needle[j + 1] == '\0')
				return (&haystach[i]);
			j++;
			n++;
		}
		i++;
	}
	return (0);
}
