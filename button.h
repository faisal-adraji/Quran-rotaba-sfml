class Button : public Label {
public:
	Button()
	{
		Label();

	}
	virtual int draw(sf::RenderWindow &window)
	{

	}
	virtual int update()
	{
		if(curs_in()) {
			r.setOutlineColor(sf::LEVERT);
		} else {
			r.setOutlineColor(sf::JAUNE);
		}

	}
	virtual bool curs_in()
	{
		return b_box.contains(curs_pos_f);
	}
protected:
    sf::FloatRect b_box;
};

class AyaButton : public Button {
public:
	AyaButton(int sou, int ay, int x =0, int y=0) 
	{
		pos_x = x;
		pos_y = y;
		scale = .4;
		aya = Aya(sou, ay);
		if (!t.loadFromFile(aya.nbr_gen()))
	    {
	        std::cout<<"cannot load image"<<std::endl;
	    }

	    t.setSmooth(true);
	    s.setTexture(t);
	    s.scale(scale,scale);
	    s.setPosition(pos_x,pos_y);
	    s.setColor(sf::CYAN);
	    r.setPosition(s.getPosition());
	    r.setSize(sf::Vector2f(s.getTextureRect().width, s.getTextureRect().height));
	    r.scale(s.getScale());
	    r.setFillColor(sf::VERT);

	    b_box = s.getGlobalBounds();
	    prev_aya = aya.m_aya;

	}
	virtual int update(int i)
	{
		bool t = (i == rand_num);
        // std::cout<<"i :"<< i <<std::endl;
        // std::cout<<"rand_num :"<<rand_num<<std::endl;
		if(curs_in()) {
			r.setOutlineColor(sf::LEVERT);
			if (mouse_right_clicked) {
				if (i == rand_num-1) {
				//if(isnext()){
					good_answer = true;
					good_answer_timer.restart();
					r.setFillColor(sf::LEVERT);
						
				} else {
					bad_answer = true;
					bad_answer_timer.restart();
					r.setFillColor(sf::ROUGE);		
				}
			}
		} else {
			r.setOutlineColor(sf::JAUNE);
		}

		if (bad_answer_timer.getElapsedTime().asMilliseconds() > bad_answer_dly &&
			good_answer_timer.getElapsedTime().asMilliseconds() > good_answer_dly) {
			r.setFillColor(sf::VERT);		
		}

	}

	virtual int draw(sf::RenderWindow &window)
	{
		window.draw(r);
		window.draw(s);
	}


	int refresh_tex()
	{
		if(prev_aya != aya.m_aya)
		{
			if (!t.loadFromFile(aya.nbr_gen()))
		    {
		        std::cout<<"cannot load image"<<std::endl;
		    }
		    w = t.getSize().x;
		    h = t.getSize().y;

		    //std::cout<<t.getSize().y<<std::endl;
		    t.setSmooth(true);
		    s.setTexture(t);
		    s.setTextureRect(sf::IntRect(0, 0, w, h));
		    s.setPosition(pos_x,pos_y);
		    s.setColor(sf::CYAN);
		    r.setPosition(s.getPosition());
		    r.setSize(sf::Vector2f(s.getTextureRect().width, s.getTextureRect().height));
		    r.setFillColor(sf::VERT);
	   
		    b_box = s.getGlobalBounds();
		    prev_aya = aya.m_aya;
		}
	}

    Aya aya;
    int prev_aya;
    int prev_soura;
private:


};