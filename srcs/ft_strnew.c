
char * ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);
	while (size >= 0)
		str[size--] = '\0';
	return (str);
}
