
//  conv function 
/* q = 200
    while (quotient > 0)
    r = q%2
    q = q/2
    store remainder somethere
    int arr[32]
    use one singular function w the same division method logic
    call funcion 3 times  and insert base to divide it by 
    convDec(int x, int divbase);
    
    https://www.codingame.com/playgrounds/14213/how-to-play-with-strings-in-c/search-within-a-string
    
    */



bool check_characters(int inp)
{
	bool isValid;
	char user[] = inp;
	char invalidChar[] = "0123456789/.,\!@#$%^&*()_+=";
	char *ptr = strpbrk(user, invalidChar);

	if (ptr != NULL) /* Expected character is found */
	{
		isValid = false;
	}
	
	else /* Expected character isn't found */
	{
		isValid = true;
	}
}


