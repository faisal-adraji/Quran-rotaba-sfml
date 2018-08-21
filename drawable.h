class Drawable {
public:
	Drawable() {}
	virtual int draw(sf::RenderWindow &window)
	{}
	virtual int update()
	{}
	float scale;
    float w,h;
	int pos_x;
    int pos_y;
protected:
};