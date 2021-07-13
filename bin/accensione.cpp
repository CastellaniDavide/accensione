void Accendi(int N, int acceso[], int pulsante[]) {
    for (int i = N; i >= 1; i--) {
        
        for (int j = 2 * i; j <= N; j += i)
            if (pulsante[j])
                acceso[i] ^= 1;

        if (!acceso[i])
            pulsante[i] = 1;
        else
            pulsante[i] = 0;
    }
}