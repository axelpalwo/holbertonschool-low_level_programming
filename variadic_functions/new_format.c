char *new_formatter(char *str, const char * const format)
{
        int i = 0, v = 0;

        while (format[i] != '\0')
         {
                 switch (format[i])
                 {
                         case 'c':
                         case 'i':
                         case 'f':
                         case 's':
                                 str[v] = format[i];
                                 v++;
                                 break;
                 }
                 i++;
         }
        return (str);
}
