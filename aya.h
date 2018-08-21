

std::string score_gen(int &score, int &tot)
{
    std::stringstream ss;
    ss <<score<< "  /  " << tot;
    std::string chaine = ss.str();
    return chaine;
}

std::wstring soura_name_gen(int soura)
{
    switch (soura)
    {

   case 114:
       return L"\ufeb1\ufe8e\ufee8\ufedf\ufe8d";
       break;
   case 113:
       return L"\ufed5\ufee0\ufed4\ufedf\ufe8d";
       break;
   case 112:
       return L"\ufeb9\ufefc\ufea7\ufef9\ufe8d";
       break;
   case 111:
       return L"\ufea9\ufeb4\ufee4\ufedf\ufe8d";
       break;
   case 110:
       return L"\ufead\ufebc\ufee8\ufedf\ufe8d";
       break;
   case 109:
       return L"\ufee5\ufeed\ufead\ufed3\ufe8e\ufedc\ufedf\ufe8d";
       break;
   case 108:
       return L"\ufead\ufe9b\ufeed\ufedc\ufedf\ufe8d";
       break;
   case 107:
       return L"\ufee5\ufeed\ufecb\ufe8e\ufee4\ufedf\ufe8d";
       break;
   case 106:
       return L"\ufeb5\ufef3\ufead\ufed7";
       break;
   case 105:
       return L"\ufedd\ufef4\ufed4\ufedf\ufe8d";
       break;
   case 104:
       return L"\ufe93\ufeaf\ufee4\ufeec\ufedf\ufe8d";
       break;
   case 103:
       return L"\ufead\ufebc\ufecc\ufedf\ufe8d";
       break;
   case 102:
       return L"\ufead\ufe9b\ufe8e\ufedc\ufe98\ufedf\ufe8d";
       break;
   case 101:
       return L"\ufe94\ufecb\ufead\ufe8e\ufed8\ufedf\ufe8d";
       break;
   case 100:
       return L"\ufe95\ufe8e\ufef3\ufea9\ufe8e\ufecc\ufedf\ufe8d";
       break;
   case 99:
       return L"\ufe94\ufedf\ufeaf\ufedf\ufeaf\ufedf\ufe8d";
       break;
   case 98:
       return L"\ufe94\ufee8\ufef4\ufe92\ufedf\ufe8d";
       break;
   case 97:
       return L"\ufead\ufea9\ufed8\ufedf\ufe8d";
       break;
   case 96:
       return L"\ufed5\ufee0\ufecc\ufedf\ufe8d";
       break;
   case 95:
       return L"\ufee5\ufef4\ufe98\ufedf\ufe8d";
       break;
   case 94:
       return L"\ufea1\ufead\ufeb8\ufedf\ufe8d";
       break;
   case 93:
       return L"\ufef0\ufea4\ufec0\ufedf\ufe8d";
       break;
   case 92:
       return L"\ufedd\ufef4\ufee0\ufedf\ufe8d";
       break;
   case 91:
       return L"\ufeb1\ufee4\ufeb8\ufedf\ufe8d";
       break;
   case 90:
       return L"\ufea9\ufee0\ufe92\ufedf\ufe8d";
       break;
   case 89:
       return L"\ufead\ufea0\ufed4\ufedf\ufe8d";
       break;
   case 88:
       return L"\ufe94\ufef4\ufeb7\ufe8e\ufed0\ufedf\ufe8d";
       break;
   case 87:
       return L"\ufef0\ufee0\ufecb\ufef7\ufe8d";
       break;
   case 86:
       return L"\ufed5\ufead\ufe8e\ufec1\ufedf\ufe8d";
       break;
   case 85:
       return L"\ufe9d\ufeed\ufead\ufe92\ufedf\ufe8d";
       break;
   case 84:
       return L"\ufed5\ufe8e\ufed8\ufeb8\ufee7\ufef9\ufe8d";
       break;
   case 83:
       return L"\ufee5\ufef4\ufed4\ufed4\ufec1\ufee4\ufedf\ufe8d";
       break;
   case 82:
       return L"\ufead\ufe8e\ufec1\ufed4\ufee7\ufef9\ufe8d";
       break;
   case 81:
       return L"\ufead\ufef3\ufeed\ufedc\ufe98\ufedf\ufe8d";
       break;
   case 80:
       return L"\ufeb1\ufe92\ufecb";
       break;
   case 79:
       return L"\ufe95\ufe8e\ufecb\ufeaf\ufe8e\ufee8\ufedf\ufe8d";
       break;
   case 78:
       return L"\ufe88\ufe92\ufee8\ufedf\ufe8d";
       break;
   case 77:
       return L"\ufe95\ufefc\ufeb3\ufead\ufee4\ufedf\ufe8d";
       break;
   case 76:
       return L"\ufee5\ufe8e\ufeb4\ufee7\ufef9\ufe8d";
       break;
   case 75:
       return L"\ufe94\ufee3\ufe8e\ufef4\ufed8\ufedf\ufe8d";
       break;
   case 74:
       return L"\ufead\ufe9b\ufea9\ufee4\ufedf\ufe8d";
       break;
   case 73:
       return L"\ufedd\ufee3\ufeaf\ufee4\ufedf\ufe8d";
       break;
   case 72:
       return L"\ufee5\ufea0\ufedf\ufe8d";
       break;
   case 71:
       return L"\ufea1\ufeed\ufee7";
       break;
   case 70:
       return L"\ufe9d\ufead\ufe8e\ufecc\ufee4\ufedf\ufe8d";
       break;
   case 69:
       return L"\ufe94\ufed7\ufe8e\ufea4\ufedf\ufe8d";
       break;
   case 68:
       return L"\ufee1\ufee0\ufed8\ufedf\ufe8d";
       break;
   case 67:
       return L"\ufed9\ufee0\ufee4\ufedf\ufe8d";
       break;
   case 66:
       return L"\ufee1\ufef3\ufead\ufea4\ufe98\ufedf\ufe8d";
       break;
   case 65:
       return L"\ufed5\ufefc\ufec1\ufedf\ufe8d";
       break;
   case 64:
       return L"\ufee5\ufe91\ufe8e\ufed0\ufe98\ufedf\ufe8d";
       break;
   case 63:
       return L"\ufee5\ufeed\ufed8\ufed3\ufe8e\ufee8\ufee4\ufedf\ufe8d";
       break;
   case 62:
       return L"\ufe94\ufecc\ufee4\ufea0\ufedf\ufe8d";
       break;
   case 61:
       return L"\ufed1\ufebc\ufedf\ufe8d";
       break;
   case 60:
       return L"\ufe94\ufee8\ufea4\ufe98\ufee4\ufee4\ufedf\ufe8d";
       break;
   case 59:
       return L"\ufead\ufeb8\ufea4\ufedf\ufe8d";
       break;
   case 58:
       return L"\ufe94\ufedf\ufea9\ufe8e\ufea0\ufee4\ufedf\ufe8d";
       break;
   case 57:
       return L"\ufea9\ufef3\ufea9\ufea4\ufedf\ufe8d";
       break;
   case 56:
       return L"\ufe94\ufecc\ufed7\ufe8d\ufeed\ufedf\ufe8d";
       break;
   case 55:
       return L"\ufee5\ufe8e\ufee4\ufea3\ufead\ufedf\ufe8d";
       break;
   case 54:
       return L"\ufead\ufee4\ufed8\ufedf\ufe8d";
       break;
   case 53:
       return L"\ufee1\ufea0\ufee8\ufedf\ufe8d";
       break;
   case 52:
       return L"\ufead\ufeed\ufec1\ufedf\ufe8d";
       break;
   case 51:
       return L"\ufe95\ufe8e\ufef3\ufead\ufe8d\ufeab\ufedf\ufe8d";
       break;
   case 50:
       return L"\ufed5";
       break;
   case 49:
       return L"\ufe95\ufe8d\ufead\ufea0\ufea4\ufedf\ufe8d";
       break;
   case 48:
       return L"\ufea2\ufe98\ufed4\ufedf\ufe8d";
       break;
   case 47:
       return L"\ufea9\ufee4\ufea4\ufee3";
       break;
   case 46:
       return L"\ufed1\ufe8e\ufed8\ufea3\ufef7\ufe8d";
       break;
   case 45:
       return L"\ufe94\ufef4\ufe9b\ufe8e\ufea0\ufedf\ufe8d";
       break;
   case 44:
       return L"\ufee5\ufe8e\ufea7\ufeab\ufedf\ufe8d";
       break;
   case 43:
       return L"\ufed1\ufead\ufea7\ufeaf\ufedf\ufe8d";
       break;
   case 42:
       return L"\ufeef\ufead\ufeed\ufeb8\ufedf\ufe8d";
       break;
   case 41:
       return L"\ufe95\ufee0\ufebc\ufed3";
       break;
   case 40:
       return L"\ufead\ufed3\ufe8e\ufecf";
       break;
   case 39:
       return L"\ufead\ufee3\ufeaf\ufedf\ufe8d";
       break;
   case 38:
       return L"\ufeb9";
       break;
   case 37:
       return L"\ufe95\ufe8e\ufed3\ufe8e\ufebc\ufedf\ufe8d";
       break;
   case 36:
       return L"\ufeb1\ufef3";
       break;
   case 35:
       return L"\ufead\ufec1\ufe8e\ufed3";
       break;
   case 34:
       return L"\ufe84\ufe92\ufeb3";
       break;
   case 33:
       return L"\ufe8f\ufe8d\ufeaf\ufea3\ufef7\ufe8d";
       break;
   case 32:
       return L"\ufe93\ufea9\ufea0\ufeb4\ufedf\ufe8d";
       break;
   case 31:
       return L"\ufee5\ufe8e\ufee4\ufed8\ufedf";
       break;
   case 30:
       return L"\ufee1\ufeed\ufead\ufedf\ufe8d";
       break;
   case 29:
       return L"\ufe95\ufeed\ufe92\ufedc\ufee8\ufecc\ufedf\ufe8d";
       break;
   case 28:
       return L"\ufeb9\ufebc\ufed8\ufedf\ufe8d";
       break;
   case 27:
       return L"\ufedd\ufee4\ufee8\ufedf\ufe8d";
       break;
   case 26:
       return L"\ufe80\ufe8d\ufead\ufecc\ufeb8\ufedf\ufe8d";
       break;
   case 25:
       return L"\ufee5\ufe8e\ufed7\ufead\ufed4\ufedf\ufe8d";
       break;
   case 24:
       return L"\ufead\ufeed\ufee8\ufedf\ufe8d";
       break;
   case 23:
       return L"\ufee5\ufeed\ufee8\ufee3\ufe85\ufee4\ufedf\ufe8d";
       break;
   case 22:
       return L"\ufe9e\ufea4\ufedf\ufe8d";
       break;
   case 21:
       return L"\ufe80\ufe8e\ufef4\ufe92\ufee7\ufef7\ufe8d";
       break;
   case 20:
       return L"\ufeea\ufec1";
       break;
   case 19:
       return L"\ufee1\ufef3\ufead\ufee3";
       break;
   case 18:
       return L"\ufed1\ufeec\ufedc\ufedf\ufe8d";
       break;
   case 17:
       return L"\ufe80\ufe8d\ufead\ufeb3\ufef9\ufe8d";
       break;
   case 16:
       return L"\ufedd\ufea4\ufee8\ufedf\ufe8d";
       break;
   case 15:
       return L"\ufead\ufea0\ufea4\ufedf\ufe8d";
       break;
   case 14:
       return L"\ufee1\ufef4\ufeeb\ufe8d\ufead\ufe91\ufe87";
       break;
   case 13:
       return L"\ufea9\ufecb\ufead\ufedf\ufe8d";
       break;
   case 12:
       return L"\ufed1\ufeb3\ufeed\ufef3";
       break;
   case 11:
       return L"\ufea9\ufeed\ufeeb";
       break;
   case 10:
       return L"\ufeb1\ufee7\ufeed\ufef3";
       break;
   case 9:
       return L"\ufe94\ufe91\ufeed\ufe98\ufedf\ufe8d";
       break;
   case 8:
       return L"\ufedd\ufe8e\ufed4\ufee7\ufef7\ufe8d";
       break;
   case 7:
       return L"\ufed1\ufe8d\ufead\ufecb\ufef7\ufe8d";
       break;
   case 6:
       return L"\ufee1\ufe8e\ufecc\ufee7\ufef7\ufe8d";
       break;
   case 5:
       return L"\ufe93\ufea9\ufe8b\ufe8e\ufee4\ufedf\ufe8d";
       break;
   case 4:
       return L"\ufe80\ufe8e\ufeb4\ufee8\ufedf\ufe8d";
       break;
   case 3:
       return L"\ufee5\ufe8d\ufead\ufee4\ufecb\ufedd\ufe81";
       break;
   case 2:
       return L"\ufe93\ufead\ufed8\ufe92\ufedf\ufe8d";
       break;
   case 1:
       return L"\ufe94\ufea4\ufe97\ufe8e\ufed4\ufedf\ufe8d";
       break;
    }
}


std::wstring hizb_gen(int hizb)
{
     std::wostringstream ss;
    ss << hizb;
    std::wstring chaine = ss.str();
    return chaine;
}


std::wstring time_gen(sf::Int32 elpsd)
{
    std::wstring chaine;
    int a = (int)elpsd / 1000;
    chaine =  L"  ";
    chaine += hizb_gen(a / 3600);
    chaine += L" : ";
    if ((a / 60) % 60 < 10)
        chaine += L"0";
    chaine += hizb_gen((a / 60) % 60);
    chaine += L" : ";
    if (a % 60 < 10)
        chaine += L"0";
    chaine += hizb_gen(a % 60);

    return chaine;
}

std::wstring totime_gen(int hre , int mit, int sec, sf::Int32 elpsd)
{
    std::wstring chaine;
    int a = (int)elpsd / 1000;

    int b = a / 3600;
    int c = (a / 60) % 60;
    int d = a % 60;

    int e = b + hre;
    int g = (d + sec) % 60;
    if (d + sec >= 60)
        mit++;
    int f = (c + mit) % 60;
    if (c + mit >= 60)
        e++;

    chaine =  L"  ";
    chaine += hizb_gen(e);
    chaine += L" : ";
    if (f < 10)
        chaine += L"0";
    chaine += hizb_gen(f);
    chaine += L" : ";
    if (g < 10)
        chaine += L"0";
    chaine += hizb_gen(g);

    return chaine;
}


std::string path_gen(int i)
{
    std::stringstream ss;
    ss << "res/ayat_titles/" << i << ".png";
    std::string chaine = ss.str();
    return chaine;
}

void load(int &soura, int &aya, int &score, int &tot, float &zoom, sf::Color &icone, int isreaded[]
          , int &ismenu_surhiz, int &isclose)
{
    int x;
    std::ifstream flux("dat/data.sav"/*,ios::app*/);
    flux>>soura;
    flux>>aya;
    flux>>score;
    flux>>tot;
    flux>>zoom;
    flux>>x;

    if (x == 1){
        icone = sf::BLANC;
    }
    if (x == 2){
        icone = sf::CYAN;
    }
    if (x == 3){
        icone = sf::JAUNE;
    }
    if (x == 4){
        icone = sf::ORANGE;
    }
    if (x == 5){
        icone = sf::VERT;
    }
    if (x == 6){
        icone = sf::VIOLET;
    }

    for (x = 0; x < 60; x++) {
        flux>>isreaded[x];
    }

    flux>>ismenu_surhiz;
    flux>>isclose;
}

void save(int &soura, int &aya, int &score, int &tot, float &zoom, sf::Color &icone, int isreaded[]
          ,int ismenu_surhiz, int isclose)
{
    int x;
    std::string const namefile("dat/data.sav");
    std::ofstream flux(namefile.c_str()/*,ios::app*/);
    flux<<soura<<std::endl;
    flux<<aya<<std::endl;
    flux<<score<<std::endl;
    flux<<tot<<std::endl;
    flux<<zoom<<std::endl;

    if (icone == sf::BLANC){
        x = 1;
    }
    if (icone == sf::CYAN){
        x = 2;
    }
    if (icone == sf::JAUNE){
        x = 3;
    }
    if (icone == sf::ORANGE){
        x = 4;
    }
    if (icone == sf::VERT){
        x = 5;
    }
    if (icone == sf::VIOLET){
        x = 6;
    }
    flux<<x<<std::endl;

    for (x = 0; x < 60; x++) {
        flux<<isreaded[x]<<std::endl;
    }

    flux<<ismenu_surhiz<<std::endl;
    flux<<isclose<<std::endl;
    flux<<"end"<<std::endl;

}

int load_book_mark(int &soura, int &aya)
{
    std::ifstream flux("dat/bookmark.dat"/*,ios::app*/);
    if (flux)
    {
        flux>>soura;
        flux>>aya;
    }
    else
    {
        return 0;
    }
    return 1;
}

void save_book_mark(int soura, int aya)
{
    std::string const namefile("dat/bookmark.dat");
    std::ofstream flux(namefile.c_str()/*,ios::app*/);
    flux<<soura<<std::endl;
    flux<<aya<<std::endl;
}

void load_totime(int &hre, int &mit, int &sec)
{
    std::ifstream flux("dat/time.dat"/*,ios::app*/);
    flux>>hre;
    flux>>mit;
    flux>>sec;
}

void save_totime(int hre, int mit, int sec, sf::Int32 elpsd)
{
    std::string const namefile("dat/time.dat");
    std::ofstream flux(namefile.c_str()/*,ios::app*/);

    int a = (int)elpsd / 1000;

    int b = a / 3600;
    int c = (a / 60) % 60;
    int d = a % 60;

    int e = b + hre;
    int g = (d + sec) % 60;
    if (d + sec >= 60)
        mit++;
    int f = (c + mit) % 60;
    if (c + mit >= 60)
        e++;
    flux<<e<<std::endl;
    flux<<f<<std::endl;
    flux<<g<<std::endl;
}

void read(int &win_h, int &win_w, sf::Color &icone, sf::Color &fen, float &zoom)
{
    char var;
    std::ifstream flux("config.ini"/*,ios::app*/);
    flux.get(var);
    if (var == '1'){
        win_w = 1000;
        win_h = 500;
    }
    if (var == '2'){
        win_w = 1200;
        win_h = 700;
    }


    flux.get(var);
    flux.get(var);
    if (var == '1'){
        zoom = 0.4;
    }
    if (var == '2'){
        zoom = 0.5;
    }
    if (var == '3'){
        zoom = 0.6;
    }


    flux.get(var);
    flux.get(var);
    if (var == '1'){
        icone = sf::BLANC;
    }
    if (var == '2'){
        icone = sf::CYAN;
    }
    if (var == '3'){
        icone = sf::JAUNE;
    }
    if (var == '4'){
        icone = sf::ORANGE;
    }
    if (var == '5'){
        icone = sf::VERT;
    }
    if (var == '6'){
        icone = sf::VIOLET;
    }

    flux.get(var);
    flux.get(var);
    if (var == '1'){
        fen = sf::BLANC;
    }
    if (var == '2'){
        fen = sf::GRIS;
    }
    if (var == '3'){
        fen = sf::NOIR;
    }
}

void set_ayat_max(int *ayat_max, int soura)
{
   switch (soura) {
            case 1:
                *ayat_max = 7;
                break;
            case 2:
                *ayat_max = 286;
                break;
            case 3:
                *ayat_max = 200;
                break;
            case 4:
                *ayat_max = 176;
                break;
            case 5:
                *ayat_max = 120;
                break;
            case 6:
                *ayat_max = 165;
                break;
            case 7:
                *ayat_max = 206;
                break;
            case 8:
                *ayat_max = 75;
                break;
            case 9:
                *ayat_max = 129;
                break;
            case 10:
                *ayat_max = 109;
                break;
            case 11:
                *ayat_max = 123;
                break;
            case 12:
                *ayat_max = 111;
                break;
            case 13:
                *ayat_max = 43;
                break;
            case 14:
                *ayat_max = 52;
                break;
            case 15:
                *ayat_max = 99;
                break;
            case 16:
                *ayat_max = 128;
                break;
            case 17:
                *ayat_max = 111;
                break;
            case 18:
                *ayat_max = 110;
                break;
            case 19:
                *ayat_max = 98;
                break;
            case 20:
                *ayat_max = 135;
                break;
            case 21:
                *ayat_max = 112;
                break;
            case 22:
                *ayat_max = 78;
                break;
            case 23:
                *ayat_max = 118;
                break;
            case 24:
                *ayat_max = 64;
                break;
            case 25:
                *ayat_max = 77;
                break;
            case 26:
                *ayat_max = 227;
                break;
            case 27:
                *ayat_max = 93;
                break;
            case 28:
                *ayat_max = 88;
                break;
            case 29:
                *ayat_max = 69;
                break;
            case 30:
                *ayat_max = 60;
                break;
            case 31:
                *ayat_max = 34;
                break;
            case 32:
                *ayat_max = 30;
                break;
            case 33:
                *ayat_max = 73;
                break;
            case 34:
                *ayat_max = 54;
                break;
            case 35:
                *ayat_max = 45;
                break;
            case 36:
                *ayat_max = 83;
                break;
            case 37:
                *ayat_max = 182;
                break;
            case 38:
                *ayat_max = 88;
                break;
            case 39:
                *ayat_max = 75;
                break;
            case 40:
                *ayat_max = 85;
                break;
            case 41:
                *ayat_max = 54;
                break;
            case 42:
                *ayat_max = 53;
                break;
            case 43:
                *ayat_max = 89;
                break;
            case 44:
                *ayat_max = 59;
                break;
            case 45:
                *ayat_max = 37;
                break;
            case 46:
                *ayat_max = 35;
                break;
            case 47:
                *ayat_max = 38;
                break;
            case 48:
                *ayat_max = 29;
                break;
            case 49:
                *ayat_max = 18;
                break;
            case 50:
                *ayat_max = 45;
                break;
            case 51:
                *ayat_max = 60;
                break;
            case 52:
                *ayat_max = 49;
                break;
            case 53:
                *ayat_max = 62;
                break;
            case 54:
                *ayat_max = 55;
                break;
            case 55:
                *ayat_max = 78;
                break;
            case 56:
                *ayat_max = 96;
                break;
            case 57:
                *ayat_max = 29;
                break;
            case 58:
                *ayat_max = 22;
                break;
            case 59:
                *ayat_max = 24;
                break;
            case 60:
                *ayat_max = 13;
                break;
            case 61:
                *ayat_max = 14;
                break;
            case 62:
                *ayat_max = 11;
                break;
            case 63:
                *ayat_max = 11;
                break;
            case 64:
                *ayat_max = 18;
                break;
            case 65:
                *ayat_max = 12;
                break;
            case 66:
                *ayat_max = 12;
                break;
            case 67:
                *ayat_max = 30;
                break;
            case 68:
                *ayat_max = 52;
                break;
            case 69:
                *ayat_max = 52;
                break;
            case 70:
                *ayat_max = 44;
                break;
            case 71:
                *ayat_max = 28;
                break;
            case 72:
                *ayat_max = 28;
                break;
            case 73:
                *ayat_max = 20;
                break;
            case 74:
                *ayat_max = 56;
                break;
            case 75:
                *ayat_max = 40;
                break;
            case 76:
                *ayat_max = 31;
                break;
            case 77:
                *ayat_max = 50;
                break;
            case 78:
                *ayat_max = 40;
                break;
            case 79:
                *ayat_max = 46;
                break;
            case 80:
                *ayat_max = 42;
                break;
            case 81:
                *ayat_max = 29;
                break;
            case 82:
                *ayat_max = 19;
                break;
            case 83:
                *ayat_max = 36;
                break;
            case 84:
                *ayat_max = 25;
                break;
            case 85:
                *ayat_max = 22;
                break;
            case 86:
                *ayat_max = 17;
                break;
            case 87:
                *ayat_max = 19;
                break;
            case 88:
                *ayat_max = 26;
                break;
            case 89:
                *ayat_max = 30;
                break;
            case 90:
                *ayat_max = 20;
                break;
            case 91:
                *ayat_max = 15;
                break;
            case 92:
                *ayat_max = 21;
                break;
            case 93:
                *ayat_max = 11;
                break;
            case 94:
                *ayat_max = 8;
                break;
            case 95:
                *ayat_max = 8;
                break;
            case 96:
                *ayat_max = 19;
                break;
            case 97:
                *ayat_max = 5;
                break;
            case 98:
                *ayat_max = 8;
                break;
            case 99:
                *ayat_max = 8;
                break;
            case 100:
                *ayat_max = 11;
                break;
            case 101:
                *ayat_max = 11;
                break;
            case 102:
                *ayat_max = 8;
                break;
            case 103:
                *ayat_max = 3;
                break;
            case 104:
                *ayat_max = 9;
                break;
            case 105:
                *ayat_max = 5;
                break;
            case 106:
                *ayat_max = 4;
                break;
            case 107:
                *ayat_max = 7;
                break;
            case 108:
                *ayat_max = 3;
                break;
            case 109:
                *ayat_max = 6;
                break;
            case 110:
                *ayat_max = 3;
                break;
            case 111:
                *ayat_max = 5;
                break;
            case 112:
                *ayat_max = 4;
                break;
            case 113:
                *ayat_max = 5;
                break;
            case 114:
                *ayat_max = 6;
                break;

    }
}


int hizb_encode(int soura, int aya)
{
    return ((soura * 300) + aya);
}

int set_hizb(int notre_aya)
{

    if (notre_aya < hizb_encode(2, 74))
        return 1;
    if (notre_aya < hizb_encode(2, 141))
        return 2;
    if (notre_aya < hizb_encode(2, 202))
        return 3;
    if (notre_aya < hizb_encode(2, 252))
        return 4;
    if (notre_aya < hizb_encode(3, 14))
        return 5;
    if (notre_aya < hizb_encode(3, 92))
        return 6;
    if (notre_aya < hizb_encode(3, 170))
        return 7;
    if (notre_aya < hizb_encode(4, 23))
        return 8;
    if (notre_aya < hizb_encode(4, 87))
        return 9;
    if (notre_aya < hizb_encode(4, 147))
        return 10;
    if (notre_aya < hizb_encode(5, 26))
        return 11;
    if (notre_aya < hizb_encode(5, 81))
        return 12;
    if (notre_aya < hizb_encode(6, 35))
        return 13;
    if (notre_aya < hizb_encode(6, 110))
        return 14;
    if (notre_aya < hizb_encode(6, 165))
        return 15;
    if (notre_aya < hizb_encode(7, 87))
        return 16;
    if (notre_aya < hizb_encode(7, 170))
        return 17;
    if (notre_aya < hizb_encode(8, 40))
        return 18;
    if (notre_aya < hizb_encode(9, 33))
        return 19;
    if (notre_aya < hizb_encode(9, 92))
        return 20;
    if (notre_aya < hizb_encode(10, 25))
        return 21;
    if (notre_aya < hizb_encode(11, 5))
        return 22;
    if (notre_aya < hizb_encode(11, 83))
        return 23;
    if (notre_aya < hizb_encode(12, 52))
        return 24;
    if (notre_aya < hizb_encode(13, 18))
        return 25;
    if (notre_aya < hizb_encode(14, 52))
        return 26;
    if (notre_aya < hizb_encode(16, 50))
        return 27;
    if (notre_aya < hizb_encode(16, 128))
        return 28;
    if (notre_aya < hizb_encode(17, 98))
        return 29;
    if (notre_aya < hizb_encode(18, 74))
        return 30;
    if (notre_aya < hizb_encode(19, 98))
        return 31;
    if (notre_aya < hizb_encode(20, 135))
        return 32;
    if (notre_aya < hizb_encode(21, 112))
        return 33;
    if (notre_aya < hizb_encode(22, 87))
        return 34;
    if (notre_aya < hizb_encode(24, 20))
        return 35;
    if (notre_aya < hizb_encode(25, 20))
        return 36;
    if (notre_aya < hizb_encode(26, 110))
        return 37;
    if (notre_aya < hizb_encode(27, 55))
        return 38;
    if (notre_aya < hizb_encode(28, 50))
        return 39;
    if (notre_aya < hizb_encode(29, 45))
        return 40;
    if (notre_aya < hizb_encode(31, 21))
        return 41;
    if (notre_aya < hizb_encode(33, 30))
        return 42;
    if (notre_aya < hizb_encode(34, 23))
        return 43;
    if (notre_aya < hizb_encode(36, 27))
        return 44;
    if (notre_aya < hizb_encode(37, 114))
        return 45;
    if (notre_aya < hizb_encode(39, 31))
        return 46;
    if (notre_aya < hizb_encode(40, 40))
        return 47;
    if (notre_aya < hizb_encode(41, 46))
        return 48;
    if (notre_aya < hizb_encode(43, 23))
        return 49;
    if (notre_aya < hizb_encode(45, 37))
        return 50;
    if (notre_aya < hizb_encode(47, 17))
        return 51;
    if (notre_aya < hizb_encode(51, 30))
        return 52;
    if (notre_aya < hizb_encode(54, 55))
        return 53;
    if (notre_aya < hizb_encode(57, 29))
        return 54;
    if (notre_aya < hizb_encode(61, 14))
        return 55;
    if (notre_aya < hizb_encode(66, 12))
        return 56;
    if (notre_aya < hizb_encode(75, 28))
        return 57;
    if (notre_aya < hizb_encode(77, 50))
        return 58;
    if (notre_aya < hizb_encode(86, 17))
        return 59;
    else
        return 60;
}





int getaymaxfree(int soura)
{
   switch (soura) {
      case 1:
            return  7;
      case 2:
            return  286;
      case 3:
            return  200;
      case 4:
            return  176;
      case 5:
            return  120;
      case 6:
            return  165;
      case 7:
            return  206;
      case 8:
            return  75;
      case 9:
            return  129;
      case 10:
            return  109;
      case 11:
            return  123;
      case 12:
            return  111;
      case 13:
            return  43;
      case 14:
            return  52;
      case 15:
            return  99;
      case 16:
            return  128;
      case 17:
            return  111;
      case 18:
            return  110;
      case 19:
            return  98;
      case 20:
            return  135;
      case 21:
            return  112;
      case 22:
            return  78;
      case 23:
            return  118;
      case 24:
            return  64;
      case 25:
            return  77;
      case 26:
            return  227;
      case 27:
            return  93;
      case 28:
            return  88;
      case 29:
            return  69;
      case 30:
            return  60;
      case 31:
            return  34;
      case 32:
            return  30;
      case 33:
            return  73;
      case 34:
            return  54;
      case 35:
            return  45;
      case 36:
            return  83;
      case 37:
            return  182;
      case 38:
            return  88;
      case 39:
            return  75;
      case 40:
            return  85;
      case 41:
            return  54;
      case 42:
            return  53;
      case 43:
            return  89;
      case 44:
            return  59;
      case 45:
            return  37;
      case 46:
            return  35;
      case 47:
            return  38;
      case 48:
            return  29;
      case 49:
            return  18;
      case 50:
            return  45;
      case 51:
            return  60;
      case 52:
            return  49;
      case 53:
            return  62;
      case 54:
            return  55;
      case 55:
            return  78;
      case 56:
            return  96;
      case 57:
            return  29;
      case 58:
            return  22;
      case 59:
            return  24;
      case 60:
            return  13;
      case 61:
            return  14;
      case 62:
            return  11;
      case 63:
            return  11;
      case 64:
            return  18;
      case 65:
            return  12;
      case 66:
            return  12;
      case 67:
            return  30;
      case 68:
            return  52;
      case 69:
            return  52;
      case 70:
            return  44;
      case 71:
            return  28;
      case 72:
            return  28;
      case 73:
            return  20;
      case 74:
            return  56;
      case 75:
            return  40;
      case 76:
            return  31;
      case 77:
            return  50;
      case 78:
            return  40;
      case 79:
            return  46;
      case 80:
            return  42;
      case 81:
            return  29;
      case 82:
            return  19;
      case 83:
            return  36;
      case 84:
            return  25;
      case 85:
            return  22;
      case 86:
            return  17;
      case 87:
            return  19;
      case 88:
            return  26;
      case 89:
            return  30;
      case 90:
            return  20;
      case 91:
            return  15;
      case 92:
            return  21;
      case 93:
            return  11;
      case 94:
            return  8;
      case 95:
            return  8;
      case 96:
            return  19;
      case 97:
            return  5;
      case 98:
            return  8;
      case 99:
            return  8;
      case 100:
            return  11;
      case 101:
            return  11;
      case 102:
            return  8;
      case 103:
            return  3;
      case 104:
            return  9;
      case 105:
            return  5;
      case 106:
            return  4;
      case 107:
            return  7;
      case 108:
            return  3;
      case 109:
            return  6;
      case 110:
            return  3;
      case 111:
            return  5;
      case 112:
            return  4;
      case 113:
            return  5;
      case 114:
            return  6;

    }
}

int set_id(int soura, int aya)
{
    int i = 0;
    int sou = 1;


    while (sou < soura)
    {

        i += getaymaxfree(sou);
        sou++;
    }

    i += aya;
    return i;
}

void bad_set_hizb(int *soura, int *aya, int *hizb)
{
    if (*soura <= 2 && *aya <= 74)
        *hizb = 1;
    if (*soura == 2 && *aya > 74 && *soura == 2 && *aya <= 141)
        *hizb = 2;
    if (*soura == 2 && *aya > 141 && *soura == 2 && *aya <= 202)
        *hizb = 3;
    if (*soura == 2 && *aya > 202 && *soura == 2 && *aya <= 252)
        *hizb = 4;
    if (*soura >= 2 && *aya > 252 && *soura <= 3 && *aya <= 14)
        *hizb = 5;
    if (*soura == 3 && *aya > 14 && *soura == 3 && *aya <= 92)
        *hizb = 6;
    if (*soura == 3 && *aya > 92 && *soura == 3 && *aya <= 170)
        *hizb = 7;
    if (*soura >= 3 && *aya > 170 && *soura <= 4 && *aya <= 23)
        *hizb = 8;
    if (*soura == 4 && *aya > 23 && *soura == 4 && *aya <= 87)
        *hizb = 9;
    if (*soura == 4 && *aya > 87 && *soura == 4 && *aya <= 147)
        *hizb = 10;
    if (*soura >= 4 && *aya > 147 && *soura >= 5 && *aya <= 26)
        *hizb = 11;
    if (*soura == 5 && *aya > 26 && *soura == 5 && *aya <=81)
        *hizb = 12;
    if (*soura >= 5 && *aya > 81 && *soura <= 6 && *aya <= 35)
        *hizb = 13;
    if (*soura == 6 && *aya > 35 && *soura == 6 && *aya <= 110)
        *hizb = 14;
    if (*soura == 6 && *aya > 110 && *soura == 6 && *aya <= 165)
        *hizb = 15;
    if (*soura >= 6 && *aya > 165 && *soura <= 7 && *aya <= 87)
        *hizb = 16;
    if (*soura == 7 && *aya > 87 && *soura == 7 && *aya <= 170)
        *hizb = 17;
    if (*soura >= 7 && *aya > 170 && *soura <= 8 && *aya <= 40)
        *hizb = 18;
    if (*soura >= 8 && *aya > 40 && *soura <= 9 && *aya <= 33)
        *hizb = 19;
    if (*soura == 9 && *aya > 33 && *soura == 9 && *aya <= 92)
        *hizb = 20;
    if (*soura >= 9 && *aya > 92 && *soura <= 10 && *aya <= 25)
        *hizb = 21;
    if (*soura >= 10 && *aya > 25 && *soura <= 11 && *aya <= 5)
        *hizb = 22;
    if (*soura == 11 && *aya > 5 && *soura == 11 && *aya <= 83)
        *hizb = 23;
    if (*soura >= 11 && *aya > 83 && *soura <= 12 && *aya <= 52)
        *hizb = 24;
    if (*soura >= 12 && *aya > 52 && *soura <= 13 && *aya <= 18)
        *hizb = 25;
    if (*soura >= 13 && *aya > 18 && *soura <= 14 && *aya <= 52)
        *hizb = 26;
    if (*soura >= 14 && *aya > 52 && *soura <= 16 && *aya <= 50)
        *hizb = 27;
    if (*soura == 16 && *aya > 50 && *soura == 16 && *aya <= 128)
        *hizb = 28;
    if (*soura >= 16 && *aya > 128 && *soura <= 17 && *aya <= 98)
        *hizb = 29;
    if (*soura >= 17 && *aya > 98 && *soura <= 18 && *aya <= 74)
        *hizb = 30;
    if (*soura >= 18 && *aya > 74 && *soura <= 19 && *aya <= 98)
        *hizb = 31;
    if (*soura >= 19 && *aya > 98 && *soura <= 20 && *aya <= 135)
        *hizb = 32;
    if (*soura >= 20 && *aya > 135 && *soura <= 21 && *aya <= 112)
        *hizb = 33;
    if (*soura >= 21 && *aya > 112 && *soura <= 22 && *aya <= 87)
        *hizb = 34;
    if (*soura >= 22 && *aya > 87 && *soura <= 24 && *aya <= 20)
        *hizb = 35;
    if (*soura >= 24 && *aya > 20 && *soura <= 25 && *aya <= 20)
        *hizb = 36;
    if (*soura >= 25 && *aya > 20 && *soura <= 26 && *aya <= 110)
        *hizb = 37;
    if (*soura >= 26 && *aya > 110 && *soura <= 27 && *aya <= 55)
        *hizb = 38;
    if (*soura >= 27 && *aya > 55 && *soura <= 28 && *aya <= 50)
        *hizb = 39;
    if (*soura >= 28 && *aya > 50 && *soura <= 29 && *aya <= 45)
        *hizb = 40;
    if (*soura >= 29 && *aya > 45 && *soura <= 31 && *aya <= 21)
        *hizb = 41;
    if (*soura >= 31 && *aya > 21 && *soura <= 33 && *aya <= 30)
        *hizb = 42;
    if (*soura >= 33 && *aya > 30 && *soura <= 34 && *aya <= 23)
        *hizb = 43;
    if (*soura >= 34 && *aya > 23 && *soura <= 36 && *aya <= 27)
        *hizb = 44;
    if (*soura >= 36 && *aya > 27 && *soura <= 37 && *aya <= 114)
        *hizb = 45;
    if (*soura >= 37 && *aya > 144 && *soura <= 39 && *aya <= 31)
        *hizb = 46;
    if (*soura >= 39 && *aya > 31 && *soura <= 40 && *aya <= 40)
        *hizb = 47;
    if (*soura >= 40 && *aya > 40 && *soura <= 41 && *aya <= 46)
        *hizb = 48;
    if (*soura >= 41 && *aya > 46 && *soura <= 43 && *aya <= 23)
        *hizb = 49;
    if (*soura >= 43 && *aya > 23 && *soura <= 45 && *aya <= 37)
        *hizb = 50;
    if (*soura >= 45 && *aya > 37 && *soura <= 47 && *aya <= 17)
        *hizb = 51;
    if (*soura >= 47 && *aya > 17 && *soura <= 51 && *aya <= 30)
        *hizb = 52;
    if (*soura >= 51 && *aya > 30 && *soura <= 54 && *aya <= 55)
        *hizb = 53;
    if (*soura >= 54 && *aya > 55 && *soura <= 57 && *aya <= 29)
        *hizb = 54;
    if (*soura >= 57 && *aya > 29 && *soura <= 61 && *aya <= 14)
        *hizb = 55;
    if (*soura >= 61 && *aya > 14 && *soura <= 66 && *aya <= 12)
        *hizb = 56;
    if (*soura >= 66 && *aya > 12 && *soura <= 75 && *aya <= 28)
        *hizb = 57;
    if (*soura >= 75 && *aya > 28 && *soura <= 77 && *aya <= 50)
        *hizb = 58;
    if (*soura >= 77 && *aya > 50 && *soura <= 86 && *aya <= 17)
        *hizb = 59;
    if (*soura >= 86 && *aya > 17)
        *hizb = 60;
}


class Aya
{
    public:

        ///constructeurs

        Aya():m_soura(1),m_aya(1),m_ayat_max(7){};
        Aya(int a):m_soura(a),m_aya(1)
        {
            set_ayat_max(&m_ayat_max, m_soura);
            m_hizb = set_hizb(hizb_encode(m_soura, m_aya));
            id = set_id(m_soura, m_aya);
        };
        Aya(int a ,int b): m_soura(a), m_aya(b)
        {
            set_ayat_max(&m_ayat_max, m_soura);
            m_hizb = set_hizb(hizb_encode(m_soura, m_aya));
            id = set_id(m_soura, m_aya);
        }

        int get_ayat_max(){ return m_ayat_max;}
        int get_hizb(){ return m_hizb;}
        int get_id(){ return id;}

        ///fonctions

        void set_ayasoura(int soura, int aya)
        {
            m_soura = soura;
            m_aya = aya;
            set_ayat_max(&m_ayat_max, m_soura);
            m_hizb = set_hizb(hizb_encode(m_soura, m_aya));
            id = set_id(m_soura, m_aya);
        }
        bool isequal(Aya const &autre) const
        {
            return(m_aya == autre.m_aya && m_soura == autre.m_soura);
        }
        std::string nbr_gen()
        {
            std::stringstream ss;
            if (m_aya == 0)
                ss << "res/ayat_titles/" << m_soura << ".png";
            else
                ss << "res/ayat_database/" << m_soura << "_" << m_aya << ".png";
            std::string chaine = ss.str();
            return chaine;
        }
        void shuffle_aya()
        {
            m_aya = (rand()% m_ayat_max)+ 1;
            //std::cout << "aya generated !" << std::endl;

            //return (rand()%m_ayat_max)+ 1; ajout int a la fonction
        }
        int shuffle_soura()
        {
            return (rand()%114)+ 1;
        }
        void shuffle_ayasoura()
        {
            m_soura = (rand()%114)+ 1;
            m_aya = (rand()% m_ayat_max)+ 1;
            //return (rand()%m_ayat_max)+ 1; ajout int a la fonction
        }
        void shuffle_60()
        {

            m_soura = (rand()%28)+ 87;
            set_ayat_max(&m_ayat_max, m_soura);
            m_aya = (rand()% m_ayat_max)+ 1;
            //return (rand()%m_ayat_max)+ 1; ajout int a la fonction
        }

        ///operateur
        
        Aya &operator+=(int const a)
        {
            if (m_aya >= m_ayat_max) {
                m_soura++;
                if(m_soura > 114)
                    m_soura = 1;
                m_aya = 0;
                /*if(m_soura == 1 || m_soura == 9)
                   m_aya = 1; */
            } else
                m_aya += a;
            set_ayat_max(&m_ayat_max, m_soura);
            return *this;
        }



        int m_soura;
        int m_aya;
        int m_ayat_max;
    private:
        int m_hizb;
        int id;

};

///operateur

Aya operator+(Aya const& aya, int const& a)
{
    Aya copy(aya);
    copy +=a;
    return copy;
}

bool operator==(Aya const &one, Aya const &two)
{
    return one.isequal(two);
}