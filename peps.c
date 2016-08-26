// peps - program za izračunavanje [P]otrošnje električne energije kod
// [E]lektro[P]rivrede [S]rbije

// author: Igor Vuckovic (codeic) - iv.codeic@gmail.com, ivc.rs
// version 0.0.1-beta0.3

#include <stdio.h>

int main(void)
{

	int visa_potrosnja; // unosi korisnik

	int niza_potrosnja; // unosi korisnik

	int visa_cena;
	visa_cena = 5.628;

	int niza_cena;
	niza_cena = 1.407;

	int potrosnja_kwh;
	potrosnja_kwh = visa_potrosnja + niza_potrosnja;

	int potrosnja_rsd;
	potrosnja_rsd = visa_cena + niza_cena;

	int obracunska_snaga; // fiksno
	obracunska_snaga = 6.90 * 45.883;

	int trosak_javnog_snabdevaca;
	trosak_javnog_snabdevaca = 125.53;

	int popust;
	popust = potrosnja_rsd - 5%;

	int naknada_za_ppee;
	naknada_za_ppee = potrosnja_kwh * 0.093;

	int akciza_osnovica;
	akciza_osnovica = potrosnja_rsd + popust + naknada_za_ppee;

	int akciza_iznos;
	akciza_iznos = akciza_osnovica - 7.5%;

	int pdv_osnovica;
	pdv_osnovica = potrosnja_rsd + popust + naknada_za_ppee + akciza_iznos;

	int pdv_iznos;
	pdv_iznos = pdv_osnovica - 20%;

	int umanjenje;

	int taksa_za_jms;
	taksa_za_jms = 150;

	int kamata;

	printf("Unesite broj potrošenih kWh u višoj tarifi: ");
	scanf("%f", &visa_potrosnja);

	printf("Unesite broj potrošenih kWh u nižoj tarifi: ");
	scanf("%f", &niza_potrosnja);

	printf("Za utrošenu električnu energiju dugujete:\n");
	printf("%f\n", potrosnja_rsd);


	return 0;
}

