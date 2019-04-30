void	ft_strcat(char *str1, char *str2)
{
	while(*str1)
		str1++;
	while(*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
}
