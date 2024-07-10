/**
 * format_filter - Filters the string given by formats allowed
 * @str: Formatter given
 * Return: Number of available formats
 */
int format_filter(const char *str)
{
        int i = 0;
        int counter = 0;

        while (str[i] != '\0')
        {
                switch (str[i])
                {
                        case 'c':
                        case 'i':
                        case 'f':
                        case 's':
                                counter++;
                                break;
                }
                i++;
        }
        return (counter);
}
