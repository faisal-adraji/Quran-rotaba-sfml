void keys()
{
    if(key_rep_dly.getElapsedTime().asMilliseconds() > keyrep) {                    
        key_rep_dly.restart();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::F1))
        {
            
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
        {

        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {

       
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
          
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
         
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            
        }
    }
}

void mouse() 
{
    if(mouse_rep_dly.getElapsedTime().asMilliseconds() > keyrep) {                    
        mouse_rep_dly.restart();
        mouse_right_clicked = false;
        if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
        {
            mouse_right_clicked = true;
            //std::cout<< "clicked" << std::endl;
        } 
    }
}


int input(sf::RenderWindow &window)
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.close();
        }
        keys();

        //if (event.type == sf::Event::Closed)

        if (event.type == sf::Event::MouseMoved)
        {
            curs_pos_i = sf::Mouse::getPosition(window);
            curs_pos_f = static_cast<sf::Vector2f>(curs_pos_i);
        }
        mouse();
    }
}
