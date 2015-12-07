#pragma once

const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;
const int GAMEFIELD_WIDTH = 1800;
const int GAMEFIELD_HEIGHT = 1200;
const int BITS_PER_PIXEL = 32;
const sf::Time TIMESTEP = sf::seconds(1.0f / 60.0f); // timestep, 60 fps
const int velocityIterations = 8;
const int positionIterations = 3;
const float PIXELS_PER_METER = 30.0f;
const float RAD_TO_DEG = 57.275f;
const float DEG_TO_RAD = 0.01745329f;
const int PLAYER_KEYS = 7;

enum entityCategory{ //Used for collision masks
	PLAYER = 1<<1,
	BOUNDARY = 1<<2,
};
 
enum fixtureTypes{ //Used for checking fixture contacts
	GROUND_FIXTURE = 0,
	PLAYER_FOOT_SENSOR_FIXTURE = 1,
};
