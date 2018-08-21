class App
{
    public:

        ///constructeurs L"القرآن راجع"

        App(int w,int h): 
        win_w(w), win_h(h), window(sf::VideoMode(w, h, 32), "kuran", sf::Style::Default)
        {
            //window.setIcon(32, 32, icon.getPixelsPtr());
            window.setFramerateLimit(60);
            //window.setVerticalSyncEnabled(true);
            al = new AyaLabel(1,0);
            d.push_back(new AyaButton(1,1));
            d.push_back(new AyaButton(1,1));
            d.push_back(new AyaButton(1,1));
            //choice_1 = new AyaButton(100,100);
        }

        int update_screen0()
        {
            // if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) {
            if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
                screen_id = 1;

                int i = 0;
                while(i < d.size()) {                
                    d[i]->aya.m_soura = g_soura;
                    i++;
                }

                good_answer = true;
                draw_dly.restart();
            }

            al->update();

        }
        int update_screen1()
        {
            int i = 0;

            if(good_answer && good_answer_timer.getElapsedTime().asMilliseconds() > good_answer_dly){
                
                rand_num = (rand()%99)/33 +1;
                // std::cout << rand_num << std::endl;

                //label to next question
                al->aya+=1;
                // std::cout << "aya : " << al->aya.m_aya << std::endl;
                if (al->aya.m_aya == al->aya.m_ayat_max)
                {
                    screen_id = 0;
                    al->aya.m_aya = 0;
                    al->aya.m_soura+=1;
                    al->aya.set_ayasoura(al->aya.m_soura, al->aya.m_aya);
                }
                g_soura = al->aya.m_soura;
                g_aya = al->aya.m_aya;

                //button to next question
                while(i < d.size()) {                
                    d[i]->aya= al->aya;
                    if (rand_num-1 == i) {               
                        d[i]->aya.m_soura = g_soura;
                        d[i]->aya.m_aya = g_aya + 1;
                        d[i]->aya.set_ayasoura(d[i]->aya.m_soura, d[i]->aya.m_aya);
                        std::cout << "aya " << i << ": " << d[i]->aya.m_aya << std::endl;
                    } else {
                        d[i]->aya.set_ayasoura(d[i]->aya.m_soura, d[i]->aya.m_aya);
                        d[i]->aya.shuffle_aya();
                        do {
                            if (d[i]->aya.m_soura < 86) {
                                d[i]->aya.shuffle_aya();
                                std::cout << "aya rand" << i << ": " << d[i]->aya.m_aya << std::endl;
                            } else
                                d[i]->aya.shuffle_60();
                        } while (d[i]->aya == al->aya
                                 || d[i]->aya == al->aya+1
                                 || d[i]->aya == d[(i+3-1)%3]->aya
                                 || d[i]->aya == d[(i+3+1)%3]->aya);
                    }
                    i++;
                }



                good_answer=false;
            }

            al->update();
            
            i=0;
            while(i < d.size()) {                
                d[i]->update(i);
                i++;
            }

            //change texture and calculate the new positions
            int margin = 20;
            al->pos_y = margin;
            al->refresh_tex();
            d[0]->pos_y = al->pos_y + al->h*al->scale + margin;
            d[0]->refresh_tex();
            d[1]->pos_y = d[0]->pos_y + d[0]->h*al->scale + margin;
            d[1]->refresh_tex();
            d[2]->pos_y = d[1]->pos_y + d[1]->h*al->scale + margin;
            d[2]->refresh_tex();

        }

        int update_screen()
        {
            
        }

        int update()
        {
            if (screen_id == 1){
                update_screen1();
            }

            if (screen_id == 0){
                update_screen0();
            }
        }

        int draw_screen0()
        {
             al->draw(window);
        }
        int draw_screen1()
        {

            al->draw(window);
            int i = 0;
            while(i < d.size()) {                
                d[i]->draw(window);
                i++;
            }
            //b.draw(window);
            //choice_1->draw(window);  
            
        }
        int draw_screen()
        {
 
        }
        int draw()
        {
            window.clear(sf::CYAN);
            if (draw_dly.getElapsedTime().asMilliseconds() > screen_dly) {
                //window.draw(t_msg);
                if(screen_id == 0)
                {
                    draw_screen0();
                }               

                if(screen_id == 1)
                {
                    draw_screen1();
                }  
            }
            window.display();   
        }

        int run() 
        {
            while(window.isOpen()) {
                input(window);
                update();
                draw();
            }
        }

        sf::RenderWindow window;

    private:
        int win_w;
        int win_h;
        bool app_run = true;

        AyaLabel *al;
        std::vector<AyaButton*> d;
        //AyaButton *choice_1;
};