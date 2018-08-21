
bool display_help;
bool full_screen;
bool curs_visible;
bool mouse_right_clicked;
bool mouse_left_clicked;
bool good_answer = false;
bool bad_answer = false;

int screen_id = 0;
int delta = 0;
int isclose = 0;
int prev_delta = 0;
int win_h = 700;
int win_w = 1200;
int curs_x = 0;
int curs_y = 0;
int keyrep = 00;
int screen_dly = 500;
int good_answer_dly = 100;
int bad_answer_dly = 200;

int g_soura = 2;
int g_aya = 100;
int rand_num = 0;


sf::Vector2f curs_pos_f;
sf::Vector2i curs_pos_i;

sf::Clock app_cumul_time;
sf::Clock app_time;
sf::Clock key_rep_dly;
sf::Clock mouse_rep_dly;
sf::Clock msg_dly;
sf::Clock draw_dly;
sf::Clock good_answer_timer;
sf::Clock bad_answer_timer;

