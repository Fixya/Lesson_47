#include <SFML/Graphics.hpp>
#include <vector>

using namespace sf;
using namespace std;
class Art
{
private:
	Texture texture;
	Sprite sprite;
public:
	Art(Vector2f pos) {
		texture.loadFromFile("box.jpg");
		sprite.setTexture(texture);
		sprite.setPosition(pos);
	}
	Sprite getSprite() { return sprite; }
};

int main()
{
	RenderWindow window(VideoMode(800, 600), "SFML Works!");

	vector<Art*> v1;
	for (int i = 0; i < 5; i++)
	{
		Art* c1 = new Art (Vector2f( 100 * i, 50.f ));
		v1.push_back(c1);
	}
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear();
		for (int i = 0; i < 5; i++)
		{
			window.draw(v1.at(i)->getSprite());
		}
		window.display();
	}
	return 0;
}
