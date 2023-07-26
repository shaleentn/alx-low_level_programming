/**
  *cap_string - capitalizes the words of a string
  *@j: the pointer to the string
  *Return: pointer
  */
char *cap_string(char *j)
{
	int i;

	i = 0;
	while (j[i] != '\0')
	{
		if (j[0] >= 'a' && j[0] <= 'z')
		{
			j[0] = j[0] - 32;
		}
		if (j[i] == ' ' || j[i] == '\t' || j[i] == '\n'
			|| j[i] == ',' || j[i] == ';' || j[i] == '.'
				|| j[i] == '!' || j[i] == '?' || j[i] == '"'
				|| j[i] == '(' || j[i] == ')' || j[i] == '{'
				|| j[i] == '}')
		{
			if (j[i + 1] >= 'a' && j[i + 1] <= 'z')
			{
				j[i + 1] = j[i + 1] - 32;
			}
		}
		i++;
	}
	return (j);
}
