
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	
	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
