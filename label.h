class Label : public Drawable{
public:
	Label()
	{
		r.setPosition(100,100);
		r.setSize(sf::Vector2f(100,100));
		r.scale(1.,1.);
		r.setFillColor(sf::BLANC);
		
		r.setOutlineThickness(10);
		r.setOutlineColor(sf::JAUNE);


	}
	virtual int draw(sf::RenderWindow &window)
	{

	}
	virtual int update()
	{

	}

protected:
	sf::Texture t;
    sf::Sprite s;
    sf::RectangleShape r;
};

class AyaLabel : public Label {
public:
	AyaLabel(int sou, int ay, int x=0, int y=0) 
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

	    prev_aya = aya.m_aya;

	}
	virtual int update()
	{

		r.setOutlineColor(sf::LEVERT);
		// if(mouse_right_clicked) {
		// 	aya+=1;
		// 	updated = false;
		// 	mouse_right_clicked = false;
		// }


		if(prev_aya != aya.m_aya)
		{
			refresh_tex();
		}
	}

	virtual int draw(sf::RenderWindow &window)
	{
		window.draw(r);
		window.draw(s);
	}
	
	int refresh_tex()
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

	    prev_aya = aya.m_aya;
	}
	
	void refresh_pos()
	{
		s.setPosition(pos_x,pos_y);
		r.setPosition(s.getPosition());
	    r.setSize(sf::Vector2f(s.getTextureRect().width, s.getTextureRect().height));
	}


    Aya aya;
    int prev_aya;
    int prev_soura;

private:


};