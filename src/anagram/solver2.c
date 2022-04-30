int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
	61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137,
	139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223,
	227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307,
	311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397,
	401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487,
	491, 499, 503, 509, 521, 523, 541};

const char alpha[] = "abcdefghijklmnopqrstuvwxyz";
const len = sizeof(alpha) / sizeof(alpha[0]);

int getPrime(char c)
{
	for (int i = 0; i < len; i++)
	{
		if (alpha[i] == c) return primes[i];
	}
	// ignore unknown characters
	return 1;
}

int getPrimeHash(char *word, int word_len)
{
	int P = 1;
	int i;
	if (word_len > 0)
	{
		while (word[i]!='\0')
		{
			P *= mapPrime(word[i]);
			i++;
		}
	}
	else {
		for (i = 0; i < word_len; i++) P *= mapPrime(word[i]);
	}
	return P;
}

char *solver2 (char **dict, int dict_len, char *word, int word_len)
{
	int MATCH_HASH = getPrimeHash();
	return "yeet";
}

