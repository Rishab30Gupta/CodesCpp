//GET SMALLEST PRIME FACTOR OF A NUMBER

const int lim = 1000007;
int spf[lim + 1] = {0};

int smallest_factor(int num){
    for (int i = 2; i <= lim; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            for (int j = i * i; j <= lim; j += i)
                if (spf[j] == 0)
                    spf[j] = i;
        }
    }
  return spf[num];
}
