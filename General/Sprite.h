#include <SDL.h>
#include <string>
#include <vector>

#include "NSDL_Circ.h"


#pragma once


class Sprite{

	public:

		//Constructors
		Sprite();
		Sprite(SDL_Rect dBox, SDL_Texture* aTex);
		Sprite(SDL_Rect dBox, SDL_Texture* aTex, int anim);
		Sprite(SDL_Rect dBox, SDL_Texture* aTex, SDL_Rect cBox);
		Sprite(SDL_Rect dBox, SDL_Texture* aTex, SDL_Rect cBox, int anim);
		Sprite(SDL_Rect dBox, SDL_Texture* aTex, NSDL_Circ dCirc);
		Sprite(SDL_Rect dBox, SDL_Texture* aTex, NSDL_Circ dCirc, int anim);
		Sprite(const Sprite &spr);

		//Destructors
		~Sprite();

		//Needs Mover and Copier


		//Getters and Setters
		void setX(int x);
		void setY(int y);
		void setX(float x);
		int getX();
		void setY(float y);
		int getY();
		void setPosition(std::pair<int,int> newPos);
		std::pair<int,int> getPosition();
		std::pair<int, int> getSize();
		void setSize(std::pair<int, int> newSize);
		

		float getTrueX();
		float getTrueY();

		void setTexture(SDL_Texture* tex);
		SDL_Texture* getTexture();
		void setAngle(double new_angle);
		double getAngle();
		void setH(int h);
		void setW(int w);
		int getH();
		int getW();
		void setF(int anim);
		int getF();

		int getRenderOrder();
		void setRenderOrder(int new_order);
		virtual void updatePosition(std::vector<Sprite*> &osSprite, int ZONE_WIDTH, int ZONE_HEIGHT);
		bool check_collision(SDL_Rect* a, SDL_Rect* b);
		bool check_collision(SDL_Rect* a, NSDL_Circ* b);
		bool check_collision(NSDL_Circ* a, NSDL_Circ* b);
		bool check_all_collisions(SDL_Rect* a, std::vector<Sprite*> &osSprite);
		bool check_all_collisions(NSDL_Circ* a, std::vector<Sprite*> &osSprite);

		
		//Methods that deal with Rectangle drawn entities
		SDL_Rect* getDrawBox();
		SDL_Rect* getCollisionBox();
		bool isRectEnt();  

		//Methods that deal with Circle drawn entities
		NSDL_Circ* getCollisionCirc();
		bool isCircEnt(); 
		bool isShip();
		bool isCelestialBody();
		bool isUI();
	protected:
		SDL_Rect drawBox;
		SDL_Rect collisionBox;
		NSDL_Circ collisionCirc;
		SDL_Texture* assetTex;
		int animFrame;
		int type = 0;
		float x,y;
		std::pair<int,int> position;
		std::pair<int,int> size;
		// set renderOrder for all objects
		// 0 = player ship
		// 1 = objects with collision but no gravity (all other ships + space station)
		// 2 = objects with gravity (stars, planets, astroids, etc.)
		// 3 = UI
		// 4 = black hole
		int renderOrder;

		//Velocity variables
		//Probably should be moved to some physic related object
		float angle = 0.0;

};
