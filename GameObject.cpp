#include "GameObject.h"

GameObject::GameObject(Graphics* graphics) {
	this->graphics = graphics;
	size = 1;
}

GameObject::~GameObject() {
	delete sprites;
}

void GameObject::setImage(const wchar_t* filename) {
	sprites = new SpriteSheet(filename, graphics);
}

void GameObject::draw() {
	sprites->Draw(pos.x, pos.y,size,size);
}