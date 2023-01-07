unsigned long int hash_djb2(const unsigned char *str)
/**
 * hash_djb2 - function that return a hash
 * @str: string to be hashed
 * @return: hash value
 */

{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
