#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;

main(){
	
	char x;
	int temp, moon, rnd, fre, distance, water1;
	bool ring = false, plant = false, ufo = false, gold = false, diamond = false, iron = false, cobalt = false, titanium = false, palladium = false, chromium = false, silver = false, platinum = false, rhodium = false, tin = false, vanadium = false, tungsten = false, nickel = false, lead = false;
	bool life = false, water = false, animal = false, bacteria = false, O2 = false, N2 = false, H2 = false, CO2 = false, CO = false, Br2 = false, Cl2 = false;
	string first[20] = {"La" , "Pa" , "To" , "Ka" , "Ba" , "Bo" , "Na" , "Zi" , "Mo" , "Ta" , "A" , "Sa" , "Pu" , "Re" , "Ya" , "Poo" , "Fa" , "Ye" , "Rue" , "Va"};
	string middle[15] = {"pacha" , "soro" , "nama" , "naka" , "pala" , "kita" , "zomo" , "gallo" , "sola" , "yuka" , "kwpo" , "yoyo" , "boda" , "sona" , "mabo"};
	string end[20] = {"nium" , "zium" , " - 120" , " - 100" , " - 990" , " - 001" , " - 002" , " - 548" , " - 2002" , " - 760" , " - 010" , "yuva" , "kopoz" , "hoparoz" , "tapan" , "roque" , "god" , "moon" , " - 000" , " - 640"};
	string name;

	srand(time(0));
	
	cout<<"Welcome to the Planet Seeker\n\n";
	system("pause");
	
	
	while(1){
	

	rnd = (rand()*rand())%20;
	name = first[rnd];
	rnd = (rand()*rand())%15;
	name += middle[rnd];
	rnd = (rand()*rand())%20;
	name += end[rnd];
	
	rnd = (rand()*rand())%10;							//O2
	if(rnd == 1 or rnd == 2 or rnd == 0 or rnd == 3 or rnd == 8)O2 = true;
	
	
	rnd = (rand()*rand())%10;							//N2
	if(rnd == 2 or rnd == 3)N2 = true;
	
	
	rnd = (rand()*rand())%10;							//H2
	if(rnd == 4 or rnd == 5 or rnd == 6 or rnd == 3 or rnd == 7)H2 = true;
	
	
	rnd = (rand()*rand())%10;							//CO2
	if((rnd == 3 or rnd == 9 or rnd == 7) and O2)CO2 = true;
	
	
	rnd = (rand()*rand())%10;							//CO
	if(rnd == 6 and O2)CO = true;
	
	
	rnd = (rand()*rand())%20;							//Br2
	if(rnd == 0)Br2 = true;
	
	
	rnd = (rand()*rand())%20;							//Cl2
	if(rnd == 0)Cl2 = true;
	
	
	temp = ((rand()*rand())%201 - 100);					//temp
	
	
	if(O2 and H2 and temp <= 50 and temp >= -100)water = true;	//water
	
	
	if(temp >= -10 and water and O2 and !Br2 and !Cl2 and !CO)life = true;				//life
	
	rnd = (rand()*rand())%10;							//bacteria
	if(life and rnd != 0) bacteria = true;
	
	rnd = (rand()*rand())%20;							//plants
	if(life and rnd != 0) plant = true;
	
	if(!bacteria and plant) bacteria = true;
	
	rnd = (rand()*rand())%4;							//animals
	if(plant and rnd == 1)animal = true;
	
	rnd = (rand()*rand())%4;							//aliens
	if(life and rnd == 1)ufo = true;
	
	rnd = (rand()*rand())%20;							//rings
	if(rnd == 14)ring = true;
	
	distance = (rand()*rand())%90 + 11;					//distance
	
	
	rnd = (rand()*rand())%200;							//moons
	if(rnd <= 25) moon = 3;
	if(rnd >  25 and rnd <= 50) moon = 2;
	if(rnd >  50 and rnd <= 100) moon = 1;
	if(rnd > 100) moon = 0;
	
	
	rnd = (rand()*rand())%10;							//gold
	if(rnd == 1)gold = true;
	
	rnd = (rand()*rand())%10;							//iron
	if(rnd == 2 or rnd == 4 or rnd == 9)iron = true;
	
	rnd = (rand()*rand())%10;							//diamond
	if(rnd != 0 and CO2)diamond = true;
	
	rnd = (rand()*rand())%10;							//cobalt
	if(rnd == 2 or rnd == 5 or rnd == 9 or rnd == 8)cobalt == true;
	
	rnd = (rand()*rand())%10;							//titanium
	if(rnd == 9 or rnd == 8 or rnd == 1)titanium = true;
	
	rnd = (rand()*rand())%10;							//palladium
	if(rnd == 3 or rnd == 7)palladium = true;
	
	rnd = (rand()*rand())%10;							//chromium
	if(rnd == 2 or rnd == 0)chromium = true;
	
	rnd = (rand()*rand())%10;							//silver
	if(rnd == 5 or rnd == 1)silver = true;
	
	rnd = (rand()*rand())%10;							//platinum
	if(rnd == 3)platinum = true;
	
	rnd = (rand()*rand())%10;							//rhodium
	if(rnd == 6)rhodium = true;
	
	rnd = (rand()*rand())%10;							//tin
	if(rnd != 9 and rnd != 0)tin = true;
	
	rnd = (rand()*rand())%10;							//vanadium
	if(rnd == 8)vanadium = true;
	
	rnd = (rand()*rand())%10;							//tungsten
	if(rnd == 4 or rnd == 3)tungsten = true;
	
	rnd = (rand()*rand())%10;							//nickel
	if(rnd == 1 or rnd == 2)nickel = true;
	
	rnd = (rand()*rand())%10;							//lead
	if(rnd != 7 and rnd != 3)lead = true;
	
	if(water)water1 = (rand()*rand())%100 + 1;			//water percentage (if water == true)
	
	chap :
	
	system("cls");
	
	cout<<"Name of the planet : "<<name;
	cout<<"\n\n---------------------------------\n\n";
	cout<<"Distance    : "<<distance<<" 000 000 light years\n\n";
	cout<<"Atmosphere  : \n";
	
	if(O2)  cout<<" - O2\n";
	if(N2)  cout<<" - N2\n";
	if(H2)  cout<<" - H2\n";
	if(CO2)cout<<" - CO2\n";
	if(CO)  cout<<" - CO\n";
	if(Br2)cout<<" - Br2\n";
	if(Cl2)cout<<" - Cl2\n";
	if(!O2 and !H2 and !N2 and !CO2 and !CO and !Br2 and !Cl2)cout<<" - No atmosphere\n";
	
	cout<<"\n";
	cout<<"Resources   : \n";
	
	if(gold)cout<<" - Gold\n";
	if(diamond)cout<<" - Diamond\n";
	if(iron)cout<<" - Iron\n";
	if(cobalt)cout<<" - Cobalt\n";
	if(titanium)cout<<" - Titanium\n";
	if(palladium)cout<<" - Palladium\n";
	if(chromium)cout<<" - Chromium\n";
	if(silver)cout<<" - Silver\n";
	if(platinum)cout<<" - Platinum\n";
	if(rhodium)cout<<" - Rhodium\n";
	if(tin)cout<<" - Tin\n";
	if(vanadium)cout<<" - Vanadium\n";
	if(tungsten)cout<<" - Tungsten\n";
	if(nickel)cout<<" - Nickel\n";
	if(lead)cout<<" - Lead\n";
	
	cout<<"\n";
	cout<<"Temperature : "<<temp<<" C\n";
	
	cout<<"\n";
	cout<<"Rings       : ";
	
	if(ring) cout<<"This planet has Rings !\n";
	if(!ring)cout<<"No Rings\n";
	
	cout<<"\n";
	cout<<"Moons       : ";
	
	if(moon == 0)cout<<"No moons\n";
	if(moon >= 1)cout<<moon<<" Moon(s) has been detected\n";
	
	cout<<"\n";
	cout<<"Special features : \n";
	if(water){
		
	cout<<" - There is water on this planet!";
	if(!life and temp < -10)cout<<" But the weather is too cold to live on this planet ... ";
	if(!life and temp > 50 )cout<<" But the weather is too hot to live on this planet ... ";
	if(!life and temp <= 50 and temp >= -10)cout<<" But the atmosphere is too dangerous to live on this planet ... ";
	cout<<"\n";
	
	}
	if(bacteria)cout<<" - Bacteria has been detected!\n";
	if(life)cout<<" - Humans can live on this planet!\n";
	if(plant)cout<<" - Plants has been detected!\n";
	if(animal)cout<<" - Strange animals has been detected!\n";
	if(ufo)cout<<" - Our recievers are getting some weird frequencies from this planet ?? !! (* rarest feature *)\n";
	
	cout<<"\n";
	
	cout<<"Actions: \n";
	if(water)cout<<" - Check the water (w)\n";
	if(ufo)cout<<" - Check the frequencies (f)\n";
	if(bacteria)cout<<" - Check the bacterias (b)\n";
	if(plant)cout<<" - Check the plants (p)\n";
	if(animal)cout<<" - Check the animals (a)\n";
	cout<<" - Take the resources (r)\n - Next Planet (n)\n\nYour Action: ";
	
	cin >> x ;
	
	if(x == 'n') goto fales;
	if(x == 'w') goto wate;
	
	
	cout<<"\n\n";
	system("pause");
	
	fales :
	
	bacteria = false;
	ring = false;
	plant = false;
	ufo = false;
	gold = false;
	diamond = false;
	iron = false;
	cobalt = false;
	titanium = false;
	palladium = false;
	chromium = false;
	silver = false;
	platinum = false;
	rhodium = false;
	tin = false;
	vanadium = false;
	tungsten = false;
	nickel = false;
	lead = false;
	life = false;
	water = false;
	animal = false;
	O2 = false;
	N2 = false;
	H2 = false;
	CO2 = false;
	CO = false;
	Br2 = false;
	Cl2 = false;
	}
	
	wate :
		
		system("cls");
		
		if(!water){
			cout<<"There is no water on "<<name<<" planet!\n\n";
			system("pause");
			goto chap;
		}
		
		cout<<water1<<" % of this planet is filled with water.\n";
		
		if(temp <= -11){
			cout<<"Because of the low temperature, All the water on "<<name<<" planet has been frozen and finding bacterias or\n";
			cout<<"any living creature on this planet is nearly impossible!\n\n";
			
		}
		
		if(bacteria){
			cout<<"The good temperature and atmosphere causes to find life in the water of this planet.\nMost of the water is in the ";
			rnd = (rand()*rand())%2;
			if(rnd == 1)cout<<"Northern hemisphere";
			if(rnd == 0)cout<<"Southern Hemisphere";
			cout<<".\n\n";
		}
			system("pause");
			
			goto chap;
		
}
